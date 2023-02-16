#include <bits/stdc++.h> 
using namespace std; 

void merge(int arr[], int s , int e){
    int mid = s+ (e-s)/2;  // we did this to avoid overflow
    int size1 = mid-s+1; //size of first array
    int size2 = e-mid; // size of second

    int *first = new int[size1]; // heap memory for first array
    int *second = new int[size2];// second array
    int k =s; //k value is for indexing the main array

    //copying value 
    for(int i=0; i<size1; i++){ 
        first[i]=arr[k++];
    }
    k= mid+1;
    for(int i=0; i<size2; i++){
        second[i]=arr[k++];
    }
    int i =0;
    int j =0;
    k =s;
    // merging the two arrays
    while(i<size1 and j<size2){
        if(first[i]<second[j]){
            arr[k++]=first[i++];
        }
        else{
            arr[k++]= second[j++];
        }
    }
    while(i<size1){
        arr[k++]=first[i++];
    }
    while(j<size2){
        arr[k++] = second[j++];
    }
    delete[] first;
    delete[] first;

}

void MergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int arr[] ={9,4,7,6,3,1,5};
    int n=7;
    MergeSort(arr,0,n-1);
    for(int i=0; i<n;i++ ){
        cout<<arr[i]<<" ";
    }
}