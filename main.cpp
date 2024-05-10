// main.cpp
#include <iostream>
#include "DoublyLinkedList.h"
#include "gtest/gtest.h"

// Define your unit tests here using Google Test framework
TEST(DoublyLinkedListTest, PushBackAndPopBack) {
    DoublyLinkedList<int> list;
    list.push_back(5);
    list.push_back(10);
    list.push_back(15);

    ASSERT_EQ(list.getSize(), 3);

    list.pop_back();
    ASSERT_EQ(list.getSize(), 2);

    list.pop_back();
    ASSERT_EQ(list.getSize(), 1);

    list.pop_back();
    ASSERT_EQ(list.getSize(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
