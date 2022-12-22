/*
Given N strings and Q queries.
In each query you are given a string
, print yes if string is present
else print no.
N <= 10^5
|S| <= 100000
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
	int N;
	cin>>N;
	unordered_set<string> s;
	for(int i =0; i<N;i++){
		string str;
		cin>>str;
		s.insert(str); // it was not taking the string when it was named as "S"
	}
	int Q;
    cin>>Q;
	while(Q--){
        string str;
        cin>>str;
        auto it =  s.find(str);
		if(it!=s.end()){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
        
    }
	
}