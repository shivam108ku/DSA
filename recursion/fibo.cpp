#include<iostream>
using namespace std;

int recFibo(int n){
    if(n==1 || n ==0){
        return 1;
    }
    return recFibo(n-1) + recFibo(n-2);
}

int main(){
    int n = 5;
    cout << recFibo(n);
}
