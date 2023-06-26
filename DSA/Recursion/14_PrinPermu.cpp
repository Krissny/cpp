#include <bits/stdc++.h>
using namespace std;

void PrintPermu( int arr[],unordered_map<int,bool> m , vector<int>ds, vector<vector<int>> &ans, int n){
	if(m.size()==n){
		ans.push_back(ds);
		return;
	}
	for(int i=0; i<n; i++){
		if(m[i]==0){
			m[i]= 1;
			ds.push_back(arr[i]);
			PrintPermu(arr,m,ds,ans,n);
			ds.pop_back();
			m.erase(i);  // dont set m[i] =0, instead erase it , because our base case is based on size
		}
	}
}


int main() {
	int arr[3] ={1,2,3};
	vector<int>ds;
	vector<vector<int>>ans;
	unordered_map<int,bool> m;
	PrintPermu(arr,m,ds,ans,3);
	for(auto c: ans){
		for(int i=0; i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
	}
}
