#include <bits/stdc++.h>
using namespace std;

// The main difference betweeen this and previous method is that this method uses a temp array

long long int merge(long long arr[],long long temp[],int s , int e, int mid){
    long long int inver = 0;
    int i =s;
    int j = mid+1;
    int k = s;
    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            inver=inver+(mid+1-i); // this is the tricky part
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(int i=s;i<=e;i++){
        arr[i]= temp[i];
    }
    return inver;
}

long long int mergeSort(long long arr[],long long temp[], int s, int e)
{
    long long int inver =0;
    if(s<e){
        int mid = s +(e-s)/2;
        //left part
        inver+= mergeSort(arr,temp, s, mid);
        inver+= mergeSort(arr,temp, mid+1, e);
        inver+=merge(arr,temp, s, e, mid);
    }
    return inver;
}


int main()
{
    long long arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    long long temp[n];
    mergeSort(arr,temp, 0,n-1);
    for(int i=0; i<n;i++ ){
        cout<<arr[i]<<" ";
    }
    // cout << " Number of inversions are " << ans;
    return 0;
}