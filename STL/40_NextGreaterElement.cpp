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
    stack <int> s;
    vector<int> ind(v.size());   // a vector to store the position of the greater element if exist
    for(int i =0; i<v.size(); i++){
        if(s.empty()){
            s.push(i);
        }
        else{
            while(!s.empty()and v[s.top()]<v[i]){  // one important thing hear is the condition , you have check first that the stack is empty or not , then you can deploy the next condition or it will not work
                ind[s.top()] = i;    // if above condition is true , i element will be store in ind with position address same as the element from ehich it is greater
                s.pop();
            }
            s.push(i);
        }
    }
    return ind;
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
        if(q[i]){   // id the element is not exist in the vector that means it is still in the stack and it will lead to conclusion that it doesn't have a next greater element
            cout<<v[q[i]]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}