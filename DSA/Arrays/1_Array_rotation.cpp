/*
Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.
Examples:  

Input: 
arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
Output: 3 4 5 6 7 1 2

Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
Output: 5 6 7 1 2 3 4
*/

#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*here we create a whole temporary array and then copy the element from the original one 
in two steps.
1. first we copy the element from d position to <n 
2. then we copy the elemrnt from 0 to <d
*/
void reverse(int arr[], int d, int n){
    int temp[n];  
    int j=0;  // a counter to keep track of the position of the temporay array element 
    for(int i=d; i<n; i++){   // from d to <n
        temp[j] =arr[i];
        j++;
    }
    for(int i= 0; i<d; i++){ // from 0 to <n
        temp[j] =arr[i];
        j++;
    }
    print(temp, n);
}
// another methods is known as "ROTATING ONE BY ONE"

void rotate(int arr[], int d ,int n){
    int temp;    // a temporary int to store the array initial value
    while(d--){
        int i = 0;
        temp = arr[i];
        for(i=0; i<n; i++){   // at every loop, one element moves by one step
            if(i==(n-1)){
                arr[i] = temp;
            }
            else{
                arr[i]= arr[i+1];
            }
        }
    }
    print(arr, n);
}
//there is one more , which is juggling algorithm , but i am leaving it


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    reverse(arr, d,n);
    rotate(arr,d,n);
    
}
// can you tell time and space complexity of above functions