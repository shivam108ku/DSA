#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
     if(index >= size){
        return;
     }
     cout << arr[index];
     printArray(arr , size , index+1);
}

int main(){
    int arr[] = {2,4,2,4,5,7};
    int size = 6;
    int index = 0;
    printArray(arr , size , index);
}
