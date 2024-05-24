#include "YouTubeAPI.h"


std::string YouTubeAPI::buildURL(const std::string& query) const {
    std::string encodedQuery = query;
    std::replace(encodedQuery.begin(), encodedQuery.end(), ' ', '+');
    std::string url = "https://www.googleapis.com/youtube/v3/search?part=snippet&q=" + encodedQuery + "&key=" + apiKey;
    return url;
}



std::string YouTubeAPI::makeRequest(const std::string& url) const {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            std::cerr << "cURL error: " << curl_easy_strerror(res) << std::endl;
            return "";
        }
    }
    else {
        std::cerr << "Failed to initialize cURL." << std::endl;
        return "";
    }

    return readBuffer;
}

size_t YouTubeAPI::WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}