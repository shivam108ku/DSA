#include<iostream>
using namespace std;

int missingNum(int arr[], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;
    return total - sum;
}

int main(){
    int arr[4] = {1, 2, 3, 5};
    int n = 4;

    cout << missingNum(arr, n);
    return 0;
}
