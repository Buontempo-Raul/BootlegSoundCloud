#include"DataBase.h"

#include "nanodbc/nanodbc.h"

#include <sstream>
#include <chrono>
#include <ctime>
#include <iomanip>

DataBase* DataBase::m_instance = nullptr;

DataBase::DataBase() {}

DataBase::~DataBase() {
    disconnect();
}



bool DataBase::verifyLogin(std::vector<std::string> data)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return false;
    }

    std::string sql_query = "SELECT UserName, Password FROM Users";

    nanodbc::result results = nanodbc::execute(conn, sql_query);

    // Fetch and print the results
    while (results.next())
    {
        std::string username = results.get<std::string>(0);
        std::string password = results.get<std::string>(1);

        if (data[1] == username && data[2] == password)
            return true;
    }

    return false;
}

bool DataBase::registerUser(std::vector<std::string> data)
{
    if (!validMail(data[2]) && !validPassword(data[3]) && !validUserName(data[1]))
        return false;

    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return false;
    }

    std::string sql_query = "INSERT INTO Users (UserName, UserMail, Password) VALUES ('" + data[1] + "','" + data[2] + "','" + data[3] + "')";

    nanodbc::result results = nanodbc::execute(conn, sql_query);

    return true;
}

bool DataBase::deleteUser(std::vector<std::string> data)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return false;
    }

    std::string sql_query = "DELETE FROM Users WHERE UserMail='" + data[1] + "' AND Password='" + data[2] + "'";

    if (verifyLogin(data))
        nanodbc::result resutls = nanodbc::execute(conn, sql_query);
    else
        return false;

    return true;
}

void DataBase::addSong(std::vector<std::string> data)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return;
    }

    auto now = std::chrono::system_clock::now();

    // Convert system time to time_t (C-style time)
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);

    // Convert time_t to struct tm (broken down time)
    std::tm* now_tm = std::localtime(&now_time_t);

    // Format the date as "YYYY-MM-DD"
    std::stringstream ss;
    ss << std::put_time(now_tm, "%Y-%m-%d");

    std::string currentDate = ss.str();

    std::string sql_query = "INSERT INTO Songs (SongName, UserName, PostDate, filePath) VALUES ('" + data[1] + "','" + data[2] + "','" + currentDate + "','" + data[3] + "')";

    nanodbc::result results = nanodbc::execute(conn, sql_query);
}

std::string DataBase::searchSong(std::vector<std::string> data)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return "false";
    }

    std::string sql_query = "SELECT SongName FROM Songs WHERE UserName = '" + data[1] + "' AND SongName = '%" + data[2] + "%';";
 
    nanodbc::result result = nanodbc::execute(conn, sql_query);

    std::string formattedResult;

    while (result.next())
    {
        std::string song_name = result.get<std::string>(0);
        formattedResult += song_name;
        formattedResult += "#";
    }

    if (formattedResult.empty())
        formattedResult = "false";
    else
        formattedResult.pop_back();

    return formattedResult;
}

std::string DataBase::printSongs(std::vector<std::string> data)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return "false";
    }

    std::string sql_query = "SELECT SongName FROM Songs WHERE UserName = '" + data[1] + "';";

    nanodbc::result result = nanodbc::execute(conn, sql_query);

    std::string formattedResult;

    while (result.next())
    {
        std::string song_name = result.get<std::string>(0);
        formattedResult += song_name;
        formattedResult += "#";
    }

    if (formattedResult.empty())
        formattedResult = "false";
    else
        formattedResult.pop_back();

    return formattedResult;
}

std::string DataBase::getPath(std::vector<std::string> data)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return "false";
    }

    std::string sql_query = "SELECT filePath FROM Songs WHERE UserName = '" + data[1] + "' AND SongName ='" + data[2] + "';";

    nanodbc::result result = nanodbc::execute(conn, sql_query);

    std::string filePath;
    if (result.next())
        filePath = result.get<std::string>(0);
    else
        filePath = "false";

    return filePath;
}

std::string DataBase::getName(std::string mail)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return "false";
    }

    std::string sql_query = "SELECT UserName FROM Users WHERE UserMail = '" + mail + "';";

    nanodbc::result result = nanodbc::execute(conn, sql_query);

    if (result.next())
        return result.get<std::string>(0);
    else
        return "false";
}

bool DataBase::validUserName(const std::string& username)
{
    nanodbc::connection conn(NANODBC_TEXT("DRIVER={SQL SERVER};SERVER=localhost, 51222;DATABASE=Soundcloud_Database;Trusted_Connection=Yes;"));
    if (conn.connected() != 1)
    {
        printf("Error connecting to DataBase\n");
        return false;
    }

    std::string sql_query = "SELECT UserName FROM Users";

    nanodbc::result result = nanodbc::execute(conn, sql_query);

    while (result.next())
        if (username == result.get<std::string>(0))
            return false;

    return true;
}

bool DataBase::validMail(const std::string& mail)
{
    const std::regex pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)");

    // Use regex_match to check if the email matches the pattern
    if (std::regex_match(mail, pattern))
        return true;
    else return false;
}

bool DataBase::validPassword(const std::string& password)
{
    if (password.length() < 8) {
        return false;
    }

    bool hasDigit = false;
    for (char ch : password) {
        if (std::isdigit(ch)) {
            hasDigit = true;
            break;
        }
    }

    return hasDigit;
}

bool DataBase::executeQuery(const std::wstring& query)
{
    // Allocate statement handle
    if (SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle) != SQL_SUCCESS)
    {
        cerr << "Error allocating statement handle" << endl;
        SQLDisconnect(sqlConnHandle);
        SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
        SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
        return 0;
    }



    //// Define variables for the values to be inserted
    //string value1;
    //int value2;

    //cout << "Introdu valori: "; cin >> value1 >> value2;


    // Bind parameter values to the prepared statement
    //SQLWCHAR* sqlQuery = (SQLWCHAR*)L"INSERT INTO tabela (mere,pere) VALUES (?, ?)";
    SQLWCHAR* sqlQuery = (SQLWCHAR*)query.c_str();

    if (SQLPrepare(sqlStmtHandle, sqlQuery, SQL_NTS) != SQL_SUCCESS)
    {
        cerr << "Error preparing SQL statement" << endl;
        SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
        SQLDisconnect(sqlConnHandle);
        SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
        SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
        return 0;
    }

    //// Bind parameter values to the prepared statement
    //if (SQLBindParameter(sqlStmtHandle, 1, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_VARCHAR, value1.length(), 0, (SQLPOINTER)value1.c_str(), 0, NULL) != SQL_SUCCESS ||
    //    SQLBindParameter(sqlStmtHandle, 2, SQL_PARAM_INPUT, SQL_C_LONG, SQL_INTEGER, 0, 0, &value2, 0, NULL) != SQL_SUCCESS)
    //{
    //    cerr << "Error binding parameter values" << endl;
    //    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
    //    SQLDisconnect(sqlConnHandle);
    //    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
    //    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
    //    return 0;
    //}

    if (SQLExecDirect(sqlStmtHandle, sqlQuery, SQL_NTS) != SQL_SUCCESS)
    {
        cerr << "Error executing SQL query" << endl;
        SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
        SQLDisconnect(sqlConnHandle);
        SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
        SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
        return 0;
    }



    cout << "Values inserted successfully" << endl;

    return 1;

}


std::vector<std::wstring> DataBase::selectQuery(const std::wstring& query) {

    std::vector<std::wstring> results; // Vector pentru a stoca rezultatele

    // Verificați dacă există deja un handle de instrucțiune alocat
    if (SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle) != SQL_SUCCESS) {
        std::cerr << "Error allocating statement handle" << std::endl;
        return results;
    }

    // Convertiți interogarea într-un șir de caractere SQLWCHAR
    SQLWCHAR* sqlQuery = (SQLWCHAR*)query.c_str();

    // Executați interogarea SELECT
    if (SQLExecDirect(sqlStmtHandle, sqlQuery, SQL_NTS) != SQL_SUCCESS) {
        std::cerr << "Error executing SQL query" << std::endl;
        SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
        return results;
    }

    // Declarați o variabilă pentru a stoca rezultatul interogării SELECT
    SQLWCHAR result[1024];
    SQLLEN resultLen = 0;

    // Iterați prin toate rândurile obținute din interogare
    while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
        // Acest exemplu presupune că datele întoarse sunt în coloana 1
        SQLGetData(sqlStmtHandle, 1, SQL_C_WCHAR, result, sizeof(result), &resultLen);

        // Adăugați rezultatul la vectorul de rezultate
        results.push_back(std::wstring(result));
    }

    // Eliberați handle-ul de instrucțiune
    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);

    // Returnați rezultatul sub formă de șir de caractere wide
    return results;
}



void DataBase::disconnect()
{
    // Free statement handle
    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);

    // Disconnect from SQL Server
    SQLDisconnect(sqlConnHandle);

    // Free connection handle
    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);

    // Free environment handle
    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);

}