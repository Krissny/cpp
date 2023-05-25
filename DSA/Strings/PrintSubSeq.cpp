#include <bits/stdc++.h>
using namespace std;
//USING str.substr()
// string s = "HELLO WORLD"
// s.substr(2,3)=> LLO (Three letters from 2 index)
// s.substr(2) =>  LLO WORLD ( all letters from 2 index)

//Method 1 -> using recursuion and a output string-> time complexity O(2^n), space complexity -> O{n}
void PrintSubSeq(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    PrintSubSeq(input.substr(1), output+input[0]);

    PrintSubSeq(input.substr(1), output);
}


int main(){
    string s ="abc";
    string e = "";
    PrintSubSeq(s,e);

}