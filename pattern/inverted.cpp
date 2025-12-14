#include<iostream>
using namespace std;

void triangle( int n ){
    for (int row=1; row<=n; row++){
           for (int col=1; col<=(n-row+1); col++){
            cout << "*";
           }
           cout << endl;
       }
    
}  
int main(){
    
    int n = 5;
    int m = 5;
    triangle(n);

}