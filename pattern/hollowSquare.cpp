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
    for (int row=0 ; row<n; row++){
       for(int col = 0; col<n; col++){
         if( row == 0 || row == n-1 || col == 0 || col == n-1){
           cout << "*";
         }
         else{
          cout << " ";
         }
       } 
       cout << endl;  
    }
    
}
     
    
  
int main(){
    
    int n = 5;
    int m = 5;
    hollowSquare(n );

}