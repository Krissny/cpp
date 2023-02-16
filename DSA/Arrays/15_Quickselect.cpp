// Quicksort is a method which is used to print kth smallest or largest number
// lets write a code to print kth largest number in an array
#include <bits/stdc++.h>
using namespace std;

bool cmp(int a , int b){
    return a>b;
}

int main(){
    int arr[] ={2, 3, 4, 1, 10 , 9};
    int k;
    cin>>k;
    sort(arr,arr+6,cmp);
    // for(int i=0; i<6;i++){
    //     cout<<arr[i]<<" "<<endl;
    // }
    cout<<arr[k-1];
    //this above method donot uses quickselect method
}