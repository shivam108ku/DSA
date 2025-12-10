#include<iostream>
using namespace std;
  
void printSqaure( int n ){
    for (int row=1; row<=n; row++){
         for(int col=1; col<=n; col++){
            cout << "*";
         }
         cout << endl;
    }
}
  
int main(){
    int n = 3;
    printSqaure(n);
}               