//
// Created by Anthony Heitzeberg on 5/10/24.
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>

#include "Node.h"

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}
    ~DoublyLinkedList();

    void push_back(const T& value);
    void pop_back();
    int getSize() const { return size; }
    bool isEmpty() const { return size == 0; }
    void display() const;
    void displayHistory() const;
};

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
void DoublyLinkedList<T>::push_back(const T& value) {
    auto* newNode = new Node<T>(value);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

template <typename T>
void DoublyLinkedList<T>::pop_back() {
    if (!head) return;

    Node<T>* temp = tail;
    tail = tail->prev;
    if (tail) {
        tail->next = nullptr;
    } else {
        head = nullptr;
    }
    delete temp;
    size--;
}

template <typename T>
void DoublyLinkedList<T>::display() const {
    Node<T>* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
void DoublyLinkedList<T>::displayHistory() const {
    Node<T>* current = head;
    while (current) {
        std::cout << "URL: " << current->data.url << ", Title: " << current->data.title
                  << ", Last Visited: " << std::chrono::system_clock::to_time_t(current->data.lastVisited)
                  << std::endl;
        current = current->next;
    }
}

#endif //DOUBLYLINKEDLIST_H
