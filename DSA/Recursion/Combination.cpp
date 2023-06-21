#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(auto c: v){
        cout<<c<< " ";
    }
    cout<<endl;
}
void CombinationSum(int arr[], int i,int target, int n, vector<int> v){
    //base case
    if(i==n){
        if(target==0){
            print(v);
        }
        return;
    }
    if(arr[i]<=target){  // condition so that we only pickup when we required
        v.push_back(arr[i]);
        CombinationSum(arr,i,target-arr[i],n,v);
        v.pop_back();
    }
    CombinationSum(arr,i+1,target,n,v);
}
int main(){
    int arr[4] = {2,3,6,7};
    vector<int>v;
    CombinationSum(arr,0,7,4,v);
}