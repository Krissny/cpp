#include <bits/stdc++.h>
using namespace std;
//Q. Print only one  subsequence whose sum is k
bool subseq(int arr[], int n,int i,int sum,int k, vector<int>&v){
    if(i==n){
        //conditon satisfied
        if(sum==k){
            for(auto &c:v) cout<<c<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    // to take
    v.push_back(arr[i]);
    if(subseq(arr,n,i+1,sum+arr[i],k,v)==true){
        return true;
    }
    //not take
    v.pop_back();
   if(subseq(arr,n,i+1,sum,k,v)==true){
    return true;
   }
   return false;
}

int main() {
   int arr[3] = {1,2,1};
   vector<int>v;
   subseq(arr,3,0,0,2,v);
}
