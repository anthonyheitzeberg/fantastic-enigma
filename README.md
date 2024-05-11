# Browser History - C++ Implementation

This project implements a browser history feature using a doubly linked list data structure in C++. It allows users to navigate backward and forward through their browsing history, add new web pages to the history, and remove pages from the history.

## Getting Started

To compile and run the program, follow these steps:

1. Make sure you have CMake installed on your system.
2. Clone this repository to your local machine.
3. Navigate to the project directory in your terminal.
4. Create a build directory and navigate into it.
5. Run `cmake ..` to generate the build files.
6. Run `make` to compile the program.
7. Execute the compiled program by running `./browser_history`.

## Running Tests

Unit tests for the doubly linked list implementation are provided in the `test` directory. To run the tests, follow these steps:

1. Navigate to the `test` directory in your terminal.
2. Create a build directory and navigate into it.
3. Run `cmake ..` to generate the build files.
4. Run `make` to compile the tests.
5. Execute the compiled tests by running `./test_DoublyLinkedList`.

## Usage

- Use the `DoublyLinkedList` class to manage the browser history.
- Add new web pages to the history using the `push_back()` function.
- Navigate backward and forward through the history using the `moveBackward()` and `moveForward()` functions.
- Remove web pages from the history using the `pop_back()` function.