#include <bits/stdc++.h>
using namespace std;
// the difference here is that the arr may contain duplicates and you have to print all the sets , and the sets dont have any duplicates
void SubsetSumII(int i , int arr[], vector<int>ds, vector<vector<int>>&ans, int n){
	ans.push_back(ds);  // as we are generating list at every step so eaxh step will be our answer
	for(int j =i ; j<n; j++){   // it doesnt need a base case as the for loop will not work after crossing n
        if(j!=i and arr[j]==arr[j-1]) continue; 
        ds.push_back(arr[j]);
        SubsetSumII(j+1,arr,ds,ans,n);
        ds.pop_back();

    }
}


int main() {
	int arr[3] ={3,1,2};
    sort(arr, arr+3);
	vector<int>ds;
	vector<vector<int>>ans;
	SubsetSumII(0, arr,ds,ans,3);
	for(auto c: ans){
		for(int i=0; i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
	}
}
