#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int arr[n];
	    int ar[n];
	    map <int, int> m;
	    for(int i =0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(int i=0; i<n; i++){
	        m[arr[i]]++;
	    }
	    for(auto &value: m){
	        int i=1;
	        if(value.second==value.first){
	            value.second =i;
	            i++;
	        }
	        else{
	            value.second =-1;
	        }
	    }
	    for(int i=0; i<n; i++){
	        if(m[arr[i]]!=-1){
	            ar[i] = m[arr[i]];
	        }
	        else{
	            arr[i] = -1;
	        }
	    }
	    
	    for(int i =0; i<n; i++){
	        cout<<ar[i];
	    }
	    cout<<endl;
	    
	}
	return 0;
}
