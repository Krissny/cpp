#include <bits/stdc++.h> 
using namespace std;
int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j =high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int>&arr,int low, int high){
    if(low<high){
        //parttion
        int par = partition(arr,low,high);
        qs(arr,low,par-1);
        qs(arr,par+1,high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr,0,arr.size()-1);
    return arr;
}
int main(){

}