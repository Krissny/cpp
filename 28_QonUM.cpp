/*
Given N strings and Q queries.
In each query you are given a string
, print frequency of that string

N <= 10^6
|S| <= 100
Q <= 10^6
*/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> m; // reduces time complexity
    int n;
    cin>>n;
    for(int i= 0 ; i<n; i++){
        string str;
        cin>>str;
        m[str]++;
    }
    int q;
    cin>>q;
    for(int i =0 ; i<q; i++){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    /*
    Lets talk litle about multimaps, we aint gonna need that in cp but just 
    so that we know , multimap<int, string> -> syntax of multimap, it is same as
    unordered maos , just that if you enter a key multiple times , it will store
    it multiple time, you input duplicated also
    */
}