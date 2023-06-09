#include <bits/stdc++.h>
using namespace std;
// to print subsequence (video6)
void print(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void subsequence(int i, int arr[],vector<int>res,int n){
    if(i>=n){
        print(res);
        return;
    }
    res.push_back(arr[i]);  //taking the current index element
    subsequence(i+1,arr,res,n);
    res.pop_back();   // removing the current index element
    subsequence(i+1,arr,res,n);
}

//time complexity is O(N*2^n)-> n for the printing
//space complexity id O(N)


int main() {
	int arr[] ={3,1,2};
    vector<int>v;
    subsequence(0, arr,v,3);
}
