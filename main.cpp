#include "DoublyLinkedList.h"
#include "WebPage.h"
#include <chrono>

int main() {
    // Create a doubly linked list of WebPage objects
    DoublyLinkedList<WebPage> browserHistory;

    // Add elements to the browser history
    browserHistory.push_back(WebPage("https://www.example.com", "Example", std::chrono::system_clock::now()));
    browserHistory.push_back(WebPage("https://www.google.com", "Google", std::chrono::system_clock::now()));
    browserHistory.push_back(WebPage("https://www.github.com", "GitHub", std::chrono::system_clock::now()));

    // Display the browser history
    std::cout << "Browser History:" << std::endl;
    browserHistory.displayHistory();

    // Remove elements from the browser history
    browserHistory.pop_back();

    // Display the updated browser history
    std::cout << "\nUpdated Browser History:" << std::endl;
    browserHistory.displayHistory();

    return 0;
}