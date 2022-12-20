/*
Lets suppose we have an array-> [4, 5, 2, 25, 7, 8]
for every element of this array we have to find the next greater element on the right side
for ex:- for 5 it will be 25
and if not any greater 
this question can be simply done by using two loop , one to keep track of current value and other to serach
for next greater value than current , it will happen in O(n^2)
but using stack we can do it in O(n)

*/
#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v){
    stack<int>s;
    vector<int> index;
    for(int i =0; i<v.size(); i++){
        while(!s.empty() and v[i] > v[s.top()]){
            index[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        index[s.top()] = -1;
        s.pop();
    }
    return index;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    vector<int> q = NGE(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        if(i!=q[i]){
            cout<<-1<<endl;
        }
        else{
            cout<<v[q[i]]<<endl;
        }
    }
}