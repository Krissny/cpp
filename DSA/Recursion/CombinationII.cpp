#include <bits/stdc++.h>
using namespace std;

void CombinationII(int i, int arr[],int target, vector<int> ds , vector<vector<int>> &ans, int n){
	//Assuming the given array is sorted
	if(target==0){
		ans.push_back(ds);
        return;
	}
	for(int j = i ; j<n; j++ ){
		if(arr[j] > target){
			break;
		}
		if(j==i or arr[j]!=arr[j-1]){  // j==i because if we are at first index then there no need to check for repetion
			ds.push_back(arr[j]);
			CombinationII(j+1,arr,target-arr[j],ds,ans,n);
			ds.pop_back();
		}
	}
}

int main() {
	int arr[5] ={1,1,1,2,2};
	vector<int>ds;
	vector<vector<int>>ans;
	CombinationII(0,arr,4,ds,ans,5);
	for(auto c: ans){
		for(int i=0; i<c.size(); i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}
