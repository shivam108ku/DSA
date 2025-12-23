#include<iostream>
using namespace std;

int recFact(int val){
    if(val==1){
        return 1;
    }
    return val * recFact(val - 1);
}


int main(){
    int fact = 5;
    cout << recFact(fact);
}