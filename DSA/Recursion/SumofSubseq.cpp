#include <bits/stdc++.h>
using namespace std;
//Q. Print subsequence whose sum is k
void subseq(int arr[], int n,int i,int sum,int k, vector<int>&v){
    if(i==n){
        if(sum==k){
            for(auto &c:v) cout<<c<<" ";
            cout<<endl;
        }
        return;
    }
    // to take
    v.push_back(arr[i]);
    subseq(arr,n,i+1,sum+arr[i],k,v);
    //not take
    v.pop_back();
    subseq(arr,n,i+1,sum,k,v);
}

int main() {
   int arr[3] = {1,2,1};
   vector<int>v;
   subseq(arr,3,0,0,2,v);
}
