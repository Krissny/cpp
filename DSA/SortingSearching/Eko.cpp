#include <bits/stdc++.h>
using namespace std;

// the solution is somewhat similar to the aggressive cows problem

bool fulfilled(vector<long long int>trees,int mid, int m){
	long long int totalwood =0;
	for(int i=0; i<trees.size(); i++){
		if(trees[i]-mid > 0){
			totalwood+= (trees[i]-mid);
		}
		if(totalwood>=m){
			return true;
		}
	}
	return false;
}

long long int BinarySearch(vector<long long int>trees, long long int low, long long int high, long long int m){
	long long int res =0;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(fulfilled(trees,mid,m)){
			res = mid;
			low =mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return res;
}

int main() {
	long long int n ,m;
	cin>>n>>m;
	vector<long long int>trees;
	for(int i=0;i<n;i++){
		long long int x;
		cin>>x;
		trees.push_back(x);
	}
	sort(trees.begin(), trees.end());
	long long int ans = BinarySearch(trees,0,trees[n-1],m);
	cout<<ans<<endl;
}
