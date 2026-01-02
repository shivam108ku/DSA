#include <iostream>
#include <vector>
using namespace std;

int minEle(vector<int>& arr, int i) {
    // base case
    if (i == arr.size() - 1) {
        return arr[i];
    }

    // recursive call
    int smallMin = minEle(arr, i + 1);

    
    if (arr[i] < smallMin) {
        return arr[i];
    } else {
        return smallMin;
    }
}

int main() {
    vector<int> arr = {1, 34, 5, 6, 78, 8};

    int ans = minEle(arr, 0);
    cout << "Minimum element: " << ans;

    return 0;
}
