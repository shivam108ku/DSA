#include<iostream>
using namespace std;

// void printArray(int arr[], int size, int index){
//      if(index >= size){
//         return;
//      }
//      cout << arr[index];
//      printArray(arr , size , index+1);
// }

int searchArray(int arr[], int n , int index, int target){
    if(index >= n) {
        return -1;
    }
}


int main(){
    int arr[] = {2,4,2,4,5,7};
    int size = 6;
    int index = 0;
    int target = 7;
    searchArray(arr , size, index, target);
}
