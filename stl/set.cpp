#include<iostream>
#include <set> 
using  namespace std;


int main(){

    /// it  always store unique elements

     set<int> st;

     st.insert(10);
     st.insert(20);
     st.insert(30);
     st.insert(40);
     st.insert(50);

    set<int>::iterator it = st.begin();

    while(it != st.end()){
        
        cout << *it << " ";
        it++;
    }
 

}