/*
Given an array arr[] of size N and an integer K.
Find the maximum for each and every contiguous subarray of size K.
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 
Explanation: 
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6
*/


#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // in this attempt i tried to solve the q with a queue but failed after 7 testcases , although my sol time complexiy was o(n)
        vector<int> v;
        queue <int> q;
        for(int i=0; i<k; i++){ // this first for loop takes the first window of the array
            if(q.empty()){
                q.push(arr[i]);
            }
            else{
                if(q.front()<arr[i]){ // condition to ensure that elements are in decreasing order
                    q.pop();
                    q.push(arr[i]);
                }
            }
            if(i==k-1){  // only pushes it in vector when we have travesed to last element
                v.push_back(q.front());
            }
        }
        int j =0;  // a counter to take care of the front element of the window
        for(int i=k; i<n; i++){
            if(!q.empty() and q.front()==arr[j]){  // checks if elements are within the window
                q.pop();
            }
            if(!q.empty() and  q.front()<arr[i]){   // makes sure that the elementt inserted is greater that front
                q.pop();
                q.push(arr[i]);
                v.push_back(q.front());  
            }
            else{
                if(q.empty()){
                    q.push(arr[i]);
                }
                v.push_back(q.front());
            }
            j++; // moves the counter to one element ahead
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
	
	return 0;
}
