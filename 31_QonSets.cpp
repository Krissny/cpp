/*
Given N strings, print unique strings in lexographical order
N <= 10^5
|S| <= 100000
*/

#include <iostream>
#include <set>
using namespace std;

int main(){
	int N;
	cin>>N;
	set<string> s;
	for(int i =0; i<N;i++){
		string str;
		cin>>str;
		s.insert(str); // it was not taking the string when it was named as "S"
	}
	for(string value : s){ //i dont know why &value:s is not working
		cout<<value<<endl; 
	}
}