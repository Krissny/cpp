#include <bits/stdc++.h>
using namespace std;

void juggleAlgo(int arr[],int n,int d){
	while(d--){
		int temp = arr[0];
		for(int i =0; i<n;i++){
			arr[i] = arr[i+1];
			if(i==n-1){
				arr[i]=temp;
			}
		}
	}
}
void juggleAdvance(int arr[], int n , int d){
	int gcd =__gcd(n, d);

	for(int i=0; i<gcd; i++){
		int temp = arr[i];
		int j= i;
		while(true){
			int k = (j+d)%n;
			if(i==k){
				arr[j]=temp;
				break;
			}
			arr[j] = arr[k];
			j =k;
		}
	}
}

int main(){
	int n =6;
	int arr[n] ={1,2,3,4,5,6};
	int d =3;
	juggleAdvance(arr, n, d);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}