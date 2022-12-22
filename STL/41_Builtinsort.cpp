#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> a(n); // for this sort(a.begin(), a.end())
    // here we can also play with -> a.begin()+2
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+3); // this sort function takes two parameters , one is address of array and other is upto which it has to be sorted(+1)(the adreeses are pointers)
    // this inbuild sort works on intro sort which is a mix of three sorting algorithm, this intra is considered on of the best sorting algorithm
    // this intro sort is made from three algo - Quick sort, heap sort and insertion sort
    //its starts with quick sort and if n increases , it switches to heap sort and uses insertion sort for small number of elements
    // time complexity for worst case is nlog(n)
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}