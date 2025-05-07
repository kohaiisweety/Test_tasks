#include "Vector_func.h"
#include <mutex>
#include <iostream>
#include <random>
using namespace std;

mutex cout_mutex;

void generation(vector<int>& arr) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);

    int n = dist(gen);

    for (int i = 0; i < n; i++) {
        int a = dist(gen);
        arr.push_back(a);
    }
}

void print(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void buble_sort(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j + 1 < arr.size() - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    {
        lock_guard<mutex> lock(cout_mutex);
        cout << "Buble_sort: ";
        print(arr);
    }
}

void ins_sort(vector<int>& arr) {

    int k;
    int j;
    for (int i = 1; i < arr.size(); i++) {

        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
    {
        lock_guard<mutex> lock(cout_mutex);
        cout << "Ins_sort: ";
        print(arr);
    }
}