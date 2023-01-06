/*
Given array a of N integers. Given Q queries and in each Query given a number X, 
print count of that number in array.

constraints
1 <= N <= 10^5
1<= a[i] <= 10^7
1 <= Q <= 10^5
*/
// Hashing is basically a method of precomputaion


#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int has[N]; // all global arrays are 0 intialized

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        has[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
      int x;
      cin>>x;
      cout<<has[x]<<endl;
      // int ct =0;
      // for(int i=0; i<n; i++){
      //   if(a[i]==x){
      //       ct++;
      //   }
      // }
      //cout<<ct<<endl;
    }
  //  O(N) + O(Q*N) = O(N^2) = 10^10
  // to rrduce this time complexity we used hash , which is implemented above
  // keep in mind that hash array can only be declared upto 10^7
  // we precomputed the value of array counter
}
