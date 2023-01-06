/*
So, the question is to rearrage the array in such a way that a[i]=i and if not possible then put the value in array as -1.
*/

#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int LinearSearch(int arr[], int n, int t){ 
	 for(int i=0; i<n; i++){
		if(t == arr[i]){
			return i;
		}
		else if(i==n-1){ // modified it a bit 
			return -1;
		}
	 }
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int temp[n];          // used the temp to store the new array
	for(int i =0; i<n; i++){
		int x = LinearSearch(arr,n, i); // this function search for the value
		if(x ==-1){
			temp[i]= -1;
		}
		else {
			temp[i]= arr[x];
		}
	}
	print(temp, n);
}
/* AN OPTIMIZED SOL IN O(N) WHILE ABOVE ONE IS IN O(N^2)
int * Rearrange(int *arr,int n){
    // Complete the function
    int *b = new int[n];
    for(int j=0; j<n; j++){
        if(arr[j]>=0){ // the catch here is that the elements are in range from 0 to n-1
            b[arr[j]] = arr[j];
        }
    }
    int i=0;
    for(int k=0; k<n; k++){
        if(arr[k]==0){
            i =1;
        }
    }
    for(; i<n; i++){
        if(b[i]==0 ){
            b[i]=-1;
        }
    }
    return b;
}
*/