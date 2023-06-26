#include <bits/stdc++.h>
using namespace std;

void PrintPermu(int i,vector<int>&arr, vector<vector<int>> &ans, int n){
	if(i==n){ 
		ans.push_back(arr);
		return;
	}
	for(int j =i; j<n; j++){
		swap(arr[i], arr[j]);
		PrintPermu(i+1,arr,ans,n);
		swap(arr[i], arr[j]);
	}
}


int main() {
	vector<int> arr ={1,2,3};
	vector<int>ds;
	vector<vector<int>>ans;
	PrintPermu(0,arr,ans,3);
	for(auto c: ans){
		for(int i=0; i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
	}
}
