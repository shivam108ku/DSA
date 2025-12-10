#include<iostream>
using namespace std;

// void triangle( int n ){
//     for (int row=1; row<=n; row++){
//           for (int col = 1; col<=row; col++){
//              cout << "*";
//           }
//           cout << endl;
//     }
    
// }

void hollowSquare( int n  ){
    for (int row=1 ; row<=n; row++){
          if( row==1 || row==n){
              for(int col=1; col<=n; col++){
                cout << "*";
              }
          }
          else {
            cout << "*";
            for(int col=1; col<=n-2; col++){
                cout << " ";
            }
            cout << "*";
          }
          cout << endl;           
    }
    cout << endl;
}
     
    
  
int main(){
    
    int n = 5;
    int m = 5;
    hollowSquare(n );

}