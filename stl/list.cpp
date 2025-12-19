#include<iostream>
#include<list>
using namespace std;

int main() {

    // creation
    list<int> myList;

    // insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    myList.size();

    list<int>::iterator it = myList.begin();

    cout << "Before removing";
    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }

    myList.remove(20);

    list<int>::iterator it2 = myList.begin();
    cout << "After removing";
    while(it2 != myList.end()){
        cout << *it2 << " ";
        it2++;
    }

    return 0;
}