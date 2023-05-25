#include <bits/stdc++.h>
using namespace std;

int solve(string s){
    s = s+'$';
    int zero =0;
    int one=0;
    int count =-1;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]=='0'){
            zero++;
            if(zero==one){
                count++;
                one =zero=0;
            }
            else if(s[i+1]=='1'){
                one=0;
            }
        }
        else if(s[i]=='1'){
            one++;
            if(zero==one){
                count++;
                one =zero=0;
            }
            else if(s[i+1]=='0'){
                zero=0;
            }
        }
    }
    return count;
}

int main(){
    string s = "0000000000";
    int ans = solve(s);
    cout<<ans<<endl;
}