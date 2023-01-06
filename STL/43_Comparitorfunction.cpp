#include <bits/stdc++.h>
using namespace std;

// writing a comparator function to compare pairs

bool cmp(pair<int,int> a,pair <int,int> b ){
    if(a.first!= b.first){
        return a.first <b.first;
    }
    return a.second>b.second;
}
// jo chahiye eahi return kar do
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i =0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         // if(a[i]>a[j]) we have replaced this function with comparator function
    //         if(cmp(a[i],a[j]))
    //             swap(a[i], a[j]);
    //     }
    // }
    // sort function says that you can give this cmp function logic to me 
    sort(a.begin(), a.end(), cmp);
    // but the problem is , the result will be reversed, because our function assumes swaping when condition are true but this is not with sort
    for(int i=0; i<n; i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}