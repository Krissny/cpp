#include <bits/stdc++.h>
using namespace std;

// so, basically what happens in quicksort is that, we take a pivot point and then
// divide the array base on that pivot point
// the steps are roughtly as following:-
// 1. pick a pivot point (generally at index 0)
// 2. move it to its correct place(partion part)
// 3. all elements to the left of pivot should be less than the pivot
// 4. all elements on the right should be greater than the pivot
// 3. then apply recursion to do it again

int partition(int arr[], int s, int e){
    int pivot=arr[s];  //setting a pivot
    int cnt=0;  
    for(int i=s+1; i<=e;i++){  // counting all elements less than pivot index
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right condition satisfy kartey hai
    int i=s; int j=e; 
    while(i<pivotIndex and j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex and j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }
    //partion part
    int p = partition(arr,s,e);
    //left part solve kiya
    quickSort(arr,s,p-1);
    //right part solve kiya
    quickSort(arr, p+1, e);

}

int main(){
    int arr[5] ={4, 2, 5, 1, 3};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}