#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> its;
    vector<int> miles(10);
    vector<int> distance(15 , 0); 

   // cout << *(it.begin());
    
   its.push_back(10);
   its.push_back(20);
   its.push_back(30);
   its.push_back(40);
   its.push_back(50);


//    for(int i: it){
//     cout << i << " ";
//    }
    
//    it.insert(it.begin(), 50) ;
//    cout << it.at(0); 

       // traversing the vector by the use of iterator
       // create an iterator
    //    vector<int>::iterator it = its.begin(); // syntax

    //    while(it != its.end()){
    //     cout << *it << " ";
    //     it++; 
    //    }

    // vector<vector<int>> arr(5 , vector<int>(5,0));
    // int totalRow = arr.size();
    // int totalCol = arr[0].size();

    // jaggered vector

    vector<vector<int>> arr(5, vector<int>(4,0));
 
    arr[0] = vector<int>(4);
    arr[1] = vector<int>(2);
    arr[2] = vector<int>(5);
    arr[3] = vector<int>(3);

    int totalRow = arr.size();
    int totalCol = arr[0].size();
    int totalRowCount = brr.size(); 


    return 0;
}