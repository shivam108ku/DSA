#include<iostream>
using namespace std;

void reverse(int arr[] , int n){
     for(int i=0; i<n; i++){
        cout << arr[n-1-i] << " ";
     }
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};
    int x = 30;
    reverse(arr , 5);
    return 0;
}
