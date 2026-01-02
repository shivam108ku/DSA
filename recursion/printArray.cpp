#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr, int index) {
    // base case
    if (index == arr.size()) {
        return;
    }

    // current element print
    cout << arr[index] << " ";

    // recursive call
    printArray(arr, index + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    printArray(arr, 0);

    return 0;
}
