#include <bits/stdc++.h>
using namespace std;

//moores voting algorithm
// it about two variables
// element and count   ( if count is 0 , that means we haven't takes any array)

int majorityElement(vector<int> v) {
	// Write your code here
	int el =0;
	int count =0;
	for(int i=0; i<v.size();i++){ // to count the max occur with changing element
		if(count ==0){
			count = 1;
			el = v[i];
		}
		else if( v[i]==el){
			count++;
		}
		else{
			count--;
		}
	}
	int count1 =0;
	for(int i=0; i<v.size();i++){ //to check if our major element satisfies moore condition(n/2)
		if(v[i]==el){
			count1++;
		}
	}
	if(count1>v.size()/2){
		return el;
	}
	else{
		return -1;
	}
}

int main(){
    int n = 7 ;
    vector<int> v = {9, 7, 7, 9, 7, 9, 7};
    int ans = majorityElement(v);
    cout<<ans<<endl;
}