#include <iostream>
#include <thread>
#include <vector>
#include "Vector_func.h"
using namespace std;

int main() {

    vector<int> arr;

    generation(ref(arr));

    cout << "Original: ";
    print(arr);

    vector<int> arr1 = arr;
    vector<int> arr2 = arr;

    thread buble(buble_sort, ref(arr1));
    thread insertion(ins_sort, ref(arr2));

    buble.join();
    insertion.join();

    return 0;
}
