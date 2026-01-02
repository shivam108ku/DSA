#include<iostream>
#include<vector>
using namespace std;

int searchEle(vector<int>& arr , int i , int ele){
    if(i >= arr.size()-1){
        return 0;
    }
    if(arr[i] == ele){
        return ele;
    }else{
        return - 1;
    }
    searchEle(arr, i+1 , ele);
    cout << ele;
}

int main(){
    vector<int>arr = {1,34,5,6,78,8,};
    int ele = 78;
    searchEle(arr, 0 , ele);
}