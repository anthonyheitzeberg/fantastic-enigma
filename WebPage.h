#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <string>
#include <chrono>

struct WebPage {
    std::string url;
    std::string title;
    std::chrono::system_clock::time_point lastVisited;

    WebPage(const std::string& u, const std::string& t, const std::chrono::system_clock::time_point& time)
        : url(u), title(t), lastVisited(time) {}
};

#endif // WEBPAGE_H