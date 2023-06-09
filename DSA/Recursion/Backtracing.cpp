
#include <bits/stdc++.h>
using namespace std;

void fn(int i, int n){
	if(i<1){
		return;
	}
	fn(i-1, n);
	cout<<i<<endl;  // backtracking
}

void fn2(int i, int n){
	if(i>n){
		return;
	}
	fn2(i+1, n);
	cout<<i<<endl;  // backtracking
}


int main(){
	int n =4;
	fn(n,n);
	cout<<"fn2 executing...."<<endl;
	fn2(1,n);
}