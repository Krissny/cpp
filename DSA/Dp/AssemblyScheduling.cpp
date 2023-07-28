#include <bits/stdc++.h>
using namespace std;
//dp and memoisation
int dp[100005][3];  // but this wont work as , the heap memory would exhaust
  int solve(int n ,int cl, int cs, vector<vector<int>>& a, vector<vector<int>>& T, vector<int>& x){
      if(cs==n-1){ // why not cs==n ? because (n-1) has a usecase here , if we use 'n', then usig cs+1
          return x[cl];// will cause segmentaion fault
      }
      //continuing on same line
      if(dp[cs][cl]!=-1){
          return dp[cs][cl];
      }
      int same = solve(n,cl,cs+1,a,T,x)+ a[cl][cs+1];
      
      //continuing on diff line
      int diff = solve(n,!cl,cs+1,a,T,x) + a[!cl][cs+1] +T[cl][cs+1]; // cs+1
      
      return dp[cs][cl]= min(same,diff);
  }
  int carAssembly(vector<vector<int>>& a, vector<vector<int>>& T, vector<int>& e, vector<int>& x){
      int n = a[0].size();  // this is a little fuked up
      memset(dp, -1, sizeof(dp));
      //starting from first line
      int s = solve(n,0,0,a,T,x)+ e[0]+a[0][0];
      
      //starting from second line
      int d = solve(n,1,0,a,T,x) + e[1]+a[1][0];
      return min(s,d);
  }
  // tabulation approach
  int carAssembly(vector<vector<int>>& a, vector<vector<int>>& T, vector<int>& e, vector<int>& x){
      //You can imagine this as the cicular weighted diagram in the problem statment, but the values are being
      //updataed as we move. For more details check the notes
      int n = a[0].size();
      int dp[2][n];
      dp[0][0] = e[0]+a[0][0];
      dp[1][0] = e[1]+a[1][0];
      for(int i =1; i<n; i++){
          dp[0][i] = a[0][i] + min(dp[0][i-1],dp[1][i-1]+T[1][i]);
          dp[1][i] = a[1][i] + min(dp[1][i-1], dp[0][i-1] +T[0][i]);
          if(i==n-1){
              dp[0][i]+=x[0];
              dp[1][i]+=x[1];
          }
      }
      return min(dp[0][n-1], dp[1][n-1]);
  }
int main(){

}