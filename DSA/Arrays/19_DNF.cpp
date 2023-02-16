#include <bits/stdc++.h>
using namespace std;

// DNF is short for Dutch National Flag Algo
// it is also called 0,1,2 sort

// In this algo we divide the array in four parts 
// by using three pointer , low, mid and high

// the numbers below low is denoted by red 
// the numbers bw low and mid is denoted by white 
// the numbers bw mid and high is unknown-> means we dont know the element 
// and finally elemets above high is denoted by blue

//Now if we look at these red, white and blue color, these color are the colors of Dutch national flag

//in starting all region will be unknown and with every step we will be decreasing our unknown region

// **Algo***

// Check value of arr[mid] -

//     if 0, swap arr[low] and arr[mid], low++, mid++;
//     if 1, mid++;
//     if 2 , swap arr[mid] and arr[high], high--

void DNFalgo(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]== 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[9] ={1,0,2,1,0,1,2,1,2};
    DNFalgo(arr,9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }

}