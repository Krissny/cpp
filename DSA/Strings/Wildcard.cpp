//WILD CARD CHARACTERS//
//It referes to those characters that can be replaced for zero or more characters in a string
//here we will be discussing two of them;
// "*" -> matches with 0 or more instances of any character or set of characters
//"?"  -> matches with any one character
#include <bits/stdc++.h>
using namespace std;

bool match(string wild, string pat)
    {// this based on dynamic programming
        int w = wild.size();
		int p = pat.size();
		int dp[p+1][w+1];
		memset(dp,0,sizeof(dp));
		dp[0][0] =1;
		for(int i=1;i<=p;i++){
			for(int j=1; j<=w;j++){
				if(pat[i-1]== wild[j-1] or wild[j-1]=='?'){
					dp[i][j] = dp[i-1][j-1];
				}
				else if(wild[j-1]=='*'){
					dp[i][j] = max(dp[i-1][j], max(dp[i][j-1],dp[i-1][j-1]));
				}
				else{
					dp[i][j]=0;
				}
			}
		}
		for(int i=0; i<p; i++){
			for(int j=0; j<w; j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		return dp[p][w];

    }
int main(){
	string wild = "*c*d";
	string pattern = "abcd";
	int ans = match(wild, pattern);
	cout<<ans<<endl;
}