#include <bits/stdc++.h>
using namespace std;

int editDistance(string s, string t) {
        // Code here
        int m = s.length();
        int n = t.length();
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++){
            for(int j =0; j<n;j++){
                dp[i][j]=0;
            }
        }
        for(int i=1; i<=m; i++){
            for(int j =1; j<=n; j++){
                if(s[i]==t[j]){
                    dp[i][j]= 1 +dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        // int ans =0;
        // if(m>=n){
        //      ans = m - dp[m][n];
        // }
        // else{
        //    ans = n - dp[m][n]; 
        // }
        return dp[m][n];
    }

int main(){
    string s ="ecfbefdcfca";
    string t ="badfcbebbf";
    int ans = editDistance(s,t);
    cout<<ans<<endl;
}