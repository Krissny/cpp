#include <bits/stdc++.h>
using namespace std;
//Q. Print count of subsequence whose sum is k
int subseq(int arr[], int n,int i,int sum,int k){  // here we dont need any data structures as we dont need to keep track of elements
    if(i==n){
        //conditon satisfied
        if(sum==k){
            return 1;
        }
        else return 0;
    }
    int l = subseq(arr,n,i+1,sum+arr[i],k);
    int r = subseq(arr,n,i+1,sum,k);
   return l+r;
}

int main() {
   int arr[3] = {1,2,1};
   cout<<subseq(arr,3,0,0,2)<<endl;
}
