#include<iostream>
using namespace std;

void printHollowTri(int n){
    for(int i = 1; i <= n; i++){ 
        if(i == 1 || i == n){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
        }
        else{
            // Middle rows
            cout << "*";
            for(int space = 1; space <= i-2; space++){
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
}

int main(){
    int n = 5;
    printHollowTri(n);
}
