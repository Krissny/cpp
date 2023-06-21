#include <bits/stdc++.h>
using namespace std;
string FirstNonRepeating(string s){
		    // Code here
		    int hash[26]={0};
		    string ans = "";
		    queue<char>q;
		    int n = s.length();
		    for(int i=0; i<n ; i++){
		        hash[s[i]-'a']++;
		        q.push(s[i]);
		        while(!q.empty() and hash[q.front()-'a'] >1){
		            q.pop();
		        }
		        if(q.empty()){
		            ans+='#';
		        }
		        else{
		            ans+=q.front();
		        }
		    }
		    return ans;
		}

int main(){
    string s = "aabc";
    string ans = FirstNonRepeating(s);
    cout<<ans<<endl;
}