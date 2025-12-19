#include<iostream>
#include <queue>
using  namespace std;


int main(){
    priority_queue<int> pq;

    pq.push(10);
    pq.push(40);
    pq.push(80);
    pq.push(30);

    cout << pq.top();  // in this priority queue only use the max use--> higt priority
    
    
}