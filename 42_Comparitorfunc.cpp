#include <bits/stdc++.h>
using namespace std;

int main(){
    //lets first write a n^2 sort algorithm first

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n ; i++){
        for(int j = i+1; j <n; j++){
            if(a[i]>a[j]){ // main logic -> and this can be shift to a function and that function will be known as comparator function
                swap(a[i], a[j]);
            }
        }
    }
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
}