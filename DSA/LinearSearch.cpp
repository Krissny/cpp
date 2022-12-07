#include <iostream>
using namespace std;

void linearSearch(int array[],int size, int target){
	for(int i=0; i<size; i++){
		if(array[i]==target){
			cout<<"Taget is found at index: "<<i<<endl;
		}
		else if(i==size-1){
			cout<<"Taget not found"<<endl;
		}
	}
}

int main(){
  int n;
  cin>>n;
  int array [n];
  for(int i=0; i<n; i++){
	cin>>array[i];
  }
  int t;
  cin>>t;
  linearSearch(array,n,t);
}