#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>s;
    map<int,int>m;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it = lower_bound(s.begin(),s.end(), 5);
    //using lower bound like that on set will give u time complexity of O(n)
    //so we pass it our like
    auto it = s.lower_bound(5);
    //same with maps
    //in maps it is only applicable to key values
    //u can also use it in pairs
    //internal implementaion for vectors and array is binary search but in maps
    //and sets it uses trees traversal

    cout<<(*it) <<endl;
}