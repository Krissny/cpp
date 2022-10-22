/*
Given N strings, print unique strings in lexographical order with their 
frequency
N <= 10^5
|S| <= 100
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  int N;
  cin>>N;
  map<string, int> m;
  for(int i = 0; i<N; i++){
    string str ;
    cin>>str;
    m[str]++; // u can understand this. because keys are stored in sorted order
  }
  for(auto &value : m){
    cout<<value.first<<" "<<value.second<<endl;
  }
}