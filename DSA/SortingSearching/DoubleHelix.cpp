#include <bits/stdc++.h>
using namespace std;

int main() {
    while(true){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        int arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        int m;
        cin>>m;
        int arr2[m];
        for(int i=0; i<m;i++){
            cin>>arr2[i];
        }
        int s1 =0, s2=0;
        int j =0, i=0;
        int max_sum=0;
        while(i<n and j<m){
            if(arr1[i]>arr2[j]){
                s2+=arr2[j];
                j++;
            }
            else if(arr1[i]<arr2[j]){
                s1+=arr1[i];
                i++;
            }
            else{
                max_sum = max_sum + max(s1,s2) + arr1[i];
                s1=s2=0;
                i++;
                j++;
            }
        }
        while(i<n){
            s1+=arr1[i++];
        }
        while(j<m){
            s2+=arr2[j++];
        }
        max_sum += max(s1,s2);
        cout<<max_sum<<endl;
    }
}
