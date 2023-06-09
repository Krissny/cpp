
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i, int j){ // no need to pass this array as a reference array passes as a referecnce
    if(i==j){
        return;
    }
    swap(arr[i], arr[j]);
    reverse(arr, i+1, j-1);
}
//can we do this using a single pointer
void reverse2(int arr[], int i, int n){
    if(i==n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse2(arr, i+1,n);
}


int main(){
	int arr[]= {1,2,3,4,2};
    reverse(arr,0,4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    reverse2(arr,0,5);
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}