#include <iostream>
using namespace std;

void binarySearch(int array[], int size , int target){
    int first = 0;
    int last = size-1;
    bool exist = false;
    while(first<=last){
        int midpoint = (first + last)/2;
        if(array[midpoint]==target){
            cout<<"Target lies at index : "<< midpoint <<endl;
            exist = true;
            break;
        }
        else if(array[midpoint] > target){
            last = midpoint-1;
        }
        else if (array[midpoint] < target){
            first = midpoint +1;
        }
    }
    if(!exist){
        cout<<"Target not found"<<endl;
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
  binarySearch(array,n,t);
}

