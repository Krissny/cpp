#include <bits/stdc++.h>
using namespace std;

/*
Subset generation is an extension of the bit masking idea.Lets take a example to understand it:-
Suppose we have a set {2, 4, 5}. So, for any given set of n element, how many subset are possible?
2^n (Including empty set)
The possible set fpr given set is as following:-
{}
{2} , {4} , {5}
{2,4} , {4,5} , {5,2}
{2,4,5}
so, a total of 8(2^3)
Now lets extend this idea using the concept of bitmasking
As a set containd 2^n subset , the binary numbers from 0 to 2^n -1 should be exactly enough to 
work as a mask for each set, here's a representation to make it more clear, So for n=3 
we eill require 0 to 7 numbers
 0 - 000  -> {}
 1 - 001  -> {2}
 2 - 010  -> {3}
 3 - 011  -> {2,4}
 4 - 100  -> {5}
 5 - 101  -> {2,5}
 6 - 110  -> {4,5}
 7 - 111  -> {2,4,3}
*/
vector<vector<int>> subset(vector<int>nums){
    int n = nums.size(); // size of vector
    vector<vector<int>>subsets;
    int subest_ct = (1<<n);
    for(int mask = 0; mask < subest_ct; mask++){
        vector<int>subset;
        for(int i=0; i<n; i++){
            if(mask &( 1<<i)){
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
    // time complexity : if you look at the outer loop it is 2^n
    // and inner loop is N , so in general the T.C is O(N * 2^N)
}

int main(){
    int n;
    cin>>n; 
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    auto all_subset = subset(v);
    for(auto &subset : all_subset){
        for(auto &ele : subset){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}