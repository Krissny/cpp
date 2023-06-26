#include <bits/stdc++.h>
using namespace std;

void SubsetSum(int i , int arr[], int sum , vector<int>ds, vector<int>&ans, int n){
	if(i==n){
		ans.push_back(sum);
		return;
	}
	// ds.push_back(arr[i]); // we really dont need it acutually
	SubsetSum(i+1,arr,sum+arr[i], ds,ans,n);
	// ds.pop_back(); // neither this , you can remove it from function arrtributes
	SubsetSum(i+1,arr, sum, ds, ans, n);
}


int main() {
	int arr[3] ={3,1,2};
	vector<int>ds;
	vector<int>ans;
	SubsetSum(0, arr,0,ds,ans,3);
	sort(ans.begin(), ans.end());
	for(auto c: ans){
		cout<<c<<" ";
	}
}
