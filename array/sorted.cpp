#include<iostream>
using namespace std;

bool sorted(int arr[] , int n){
     for(int i=1; i<n; i++){
         if(arr[i-1] > arr[i])
         return false;
     }
     return true;
     
}

int main(){
    int arr[5] = {10 , 80 , 100 , 40 , 50};
   
    if(sorted(arr , 5)){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;
}
