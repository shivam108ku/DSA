#include<iostream>
#include <map>
#include <unordered_map>
using  namespace std;


int main(){
    
    // creation
    // unordered_map<string , string>table;    

    // table["in"] = "India";
    // table.insert(make_pair("en","England"));

    // unordered_map<string, string>::iterator it = table.begin();

    // while(it != table.end()){
    //     cout << it->first << " : " << it->second << endl;
    //     it++;
    // }


    map<string , string> table;    

    table["in"] = "India";
    table.insert(make_pair("en","England"));

    map<string, string>::iterator it = table.begin();

    while(it != table.end()){
        pair<string, string> p = *it;
        cout << p.first << " : " << p.second << endl;
        it++;
    }

    cout << table.size();

}