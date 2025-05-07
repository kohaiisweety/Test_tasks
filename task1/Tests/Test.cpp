#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "Vector_func.h"

using namespace std;

TEST(SortTest, BubbleSortWorks) {
    vector<int> arr = { 5, 3, 8, 1, 2 };
    vector<int> expected = arr;
    sort(expected.begin(), expected.end());

    buble_sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SortTest, InsertionSortWorks) {
    vector<int> arr = { 10, 7, 4, 3, 1 };
    vector<int> expected = arr;
    sort(expected.begin(), expected.end());

    ins_sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SortTest, BubbleSortEmpty) {
    vector<int> arr;
    vector<int> expected;

    buble_sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SortTest, InsertionSortEmpty) {
    vector<int> arr;
    vector<int> expected;

    ins_sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SortTest, BubbleSortSingleElement) {
    vector<int> arr = { 42 };
    vector<int> expected = arr;

    buble_sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SortTest, InsertionSortSingleElement) {
    vector<int> arr = { 99 };
    vector<int> expected = arr;

    ins_sort(arr);
    EXPECT_EQ(arr, expected);
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
