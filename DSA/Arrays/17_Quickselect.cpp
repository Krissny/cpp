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

int quickSort(int arr[], int s, int e,int k){
    //base case
    if(s==e){
        return arr[s];
    }
    else{
       int p = partition(arr, s, e);

       if(p+1==k){
        return arr[p];
       }
       else if(p+1>k){
        return quickSort(arr, s, p-1,k);
       }
       else{
        return quickSort(arr, p+1, e, k);
       }
    }

}

int main(){
    int arr[6] ={7, 10, 4, 3, 20, 15};
    int n=6;
   int a = quickSort(arr,0,n-1,4);
   cout<<a;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

}