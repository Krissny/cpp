#include <iostream>
#include <string>
using namespace std;

string Reverse(string str){
	int n = str.length();
	string s;
	s.resize(n);
	int j=0;
	for(int i=n-1;i>=0; i--){
		s[j] = str[i];
		j++ ;
	}
	return s;
}

int main(){
	string s;
	cin>> s;
	cout<<Reverse(s)<<endl;
}