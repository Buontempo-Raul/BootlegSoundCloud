#pragma once

#include <iostream>
#include <string>
#include <curl/curl.h>
#include "nlohmann/json.hpp"

class YouTubeAPI {
public:
    YouTubeAPI(const std::string& apiKey) : apiKey(apiKey) {}

     nlohmann::json search(const std::string& query) {
        std::string url = buildURL(query);
        std::string response = makeRequest(url);

        if (!response.empty()) {
            return nlohmann::json::parse(response);
        }
        else {
            return nullptr;
        }
    }

private:
    std::string apiKey;
    std::string buildURL(const std::string& query) const;
    std::string makeRequest(const std::string& url) const;
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp);
};

