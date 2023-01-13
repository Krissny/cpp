#include <bits/stdc++.h>
using namespace std;
// There are two imp functions lower bound and upper bound which are widely used in cp


int main(){
    //lets say we have an array
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    //to use these upper bound and lower bound functions the arrays should be sorted, otherwise it will not work in logn complexity it
    //it will work in O(n ) time complexity
    sort(a, a+n);
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //lower bound find the given value in array and if it is not present
    //then it gives the pointer to the next element
    //while upper bound gives the next element pointer even though it is present
    //these both return location which means pointer
    int *ptr = lower_bound(a, a+n,25);
    int *p = upper_bound(a, a+n,5 );
    if(ptr==(a+n)){
        cout<<"Not Found";
    }
    else{
        cout<<(*ptr)<<endl;
    }
    cout<<(*p)<<endl;
    //similary we can do that with vector
    vector<int> v ={2,13,4,2,6,9};
    sort(v.begin(), v.end());
    auto it = lower_bound(v.begin(),v.end(),5);
    cout<<(*it)<<endl;


}