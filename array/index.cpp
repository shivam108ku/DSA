#include<iostream>
using namespace std;

int printValue(int arr[] , int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            cout<< "Index found " << endl << i << endl;
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};
    int x = 30;
    printValue(arr , 5 , x);
    return 0;
}