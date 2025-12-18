#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> it(5);
    vector<int> miles(10);
    vector<int> distance(15 , 0); 

   // cout << *(it.begin());
   it.push_back(10);
   it.push_back(20);
   it.push_back(30);
   it.push_back(40);
   it.push_back(50);

   
    
//    it.insert(it.begin(), 50) ;
//    cout << it.at(0); 

    return 0;
}