#include <bits/stdc++.h>
using namespace std;

string getnumeric(string s){
    string num="22233344455566677778889999";
    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    // string alphabets="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans ="";
    int index =0;
    for(int i=0; i<s.length(); i++){
        // for(int k=0; k<alphabets.length();k++){
        //     if(s[i]==alphabets[k]){
        //         index = k;
        //         break;
        //     }
        // }
        index = s[i]-'A';  // this is important as if we know this we will not need to use the uppper loop👆👆
        if(index==0){       // and then we also dont need that alphabet string and time complexity will decrease
            ans+=str[index];
        }
        else{
            // ans+=num[index];
            // while(num[index]==num[index-1]){
            //     ans+=num[index--];
            // }
            ans+=str[index];  // if we use the str array we can decrease the time complexity further and also we dont need that if condition

        }

    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    string ans = getnumeric(s);
    cout<<ans<<endl;
}