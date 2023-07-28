#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int diff = INT_MAX;
        for(int i=1; i<n; i++){
            diff = min(diff, arr[i]-arr[i-1]);
        }
        if(diff < 0){
            cout<<0<<endl;
        }
        else if(diff >= 0){
            int ans = (diff/2) +1;
            cout<<ans<<endl;
        }
    }
}