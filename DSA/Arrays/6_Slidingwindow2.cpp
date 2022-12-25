//this was my first attempt, i solved the question but later realised that time complexity was  o(n^2) and failed after 170 testcases
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // the solution was simple , using the max element
        vector<int> v;
        for(int i=0; i<n+1-k; i++){
            v.push_back(*max_element(arr+i,arr+k+i)); ///this was awesome
        }
        return v;
    }
};


int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
}