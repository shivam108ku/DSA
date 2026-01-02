#include<iostream>
#include<vector>
using namespace std;

int searchEle(vector<int>& arr , int i , int ele){
    if(i >= arr.size()-1){
        return -1;
    }
    if(arr[i] == ele){
        return ele;
    }
    searchEle(arr, i+1 , ele);
    
}

int main(){
    vector<int>arr = {1,34,5,6,78,8,};
    int ele = 78;
    int ans = searchEle(arr, 0 , ele);

    if(ans != -1){
        cout << "Element Found " << ans;
    }
    else{
        cout << "Not Found";
    }
}