#include <bits/stdc++.h>
using namespace std;

// the first step is to find the value that is out of place
//once we find the outofplace element , we find the next opposite sign elememt 
//once we find the two element , we right rotate the array between these two elent (including both)

void rightrotate(int arr[], int a, int b){
	int temp = arr[b];
	for(int i=b; i>a; i--){
		arr[i] = arr[i-1];
	}
	arr[a] = temp;
}

int main(){
	int n =10;
	int arr[n] ={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}; //{1, -4, 3, 2, -1, 4}->
	int outoforder = -1;
	// rightrotate(arr,3,5);
	for(int i=0; i<n; i++){
		if(outoforder==-1){
			if(arr[i]>0 and i%2==0){
			outoforder = i;
			}
			else if(arr[i]<0 and i%2!=0){
				outoforder = i;
			}
		}
		if(outoforder!=-1 and arr[outoforder]*arr[i]<0){
			rightrotate(arr,outoforder,i);
			if(i-outoforder>=2){
				outoforder+=2; // once we right rotated the elemnts , the outofplace index moves 2 index ahead
			// [...-3, -4, -5, 6...] -->   [...6, -3, -4,
            // -5...]
            //      ^                          ^
            //      |                          |
            //     outofplace      -->      outofplace
			}
			else{
				outoforder= -1;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
}