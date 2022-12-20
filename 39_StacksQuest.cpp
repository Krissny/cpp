//Balance parenthesis
/*
A string of parenthesis is given and you have to confirm whether it is balanced or not
for ex:-
((()))-> this is balanced as for every opening bracket there is a closing bracket
((()-> this is an example of an unbalanced string
*/
//algorithm
#include <bits/stdc++.h>
using namespace std;
unordered_map <char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3},{']', 1}, {')', 2}, {'}', 3}};

string isBalanced(string s) {
    stack <char> st;
    for (char bracket:s){
        if (symbols[bracket]<0){
            st.push(bracket);
        }
        else{
           if (st.empty()) return "NO";
           char top = st.top();
           if (symbols[top] + symbols[bracket]==0){
            st.pop();
            } // why are we popping it firsts
           if (symbols[top] + symbols[bracket]!=0){
            return "NO";
           }
        }
    }
    if(st.empty()) return "Yes";
    return "NO";


}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}
