//the no of subsequence possible for a string is 2^n where n is the length of strong, it 
//can also include empty sequences where we dont pick any sequence
// consider  strings "adebc" and "dcadb" , the longest common subsequence is "adb"
//brutforce can be exponential 
//keep in mind that we are talking about subsequence not substring
// say we have a string "abcdefghi" and other "cdgi"-> for this the LCS is cdgi
//but what if we compare the first string with "ecdgi", we can't say "ecdgi" is a
// subsequence as after 'e' we dont see 'c' in the next elements of first string 
// you have to follow the sequence , "egi" and "cdgi" are two subseq that occur in the first
//string
#include <bits/stdc++.h>
using namespace std;
//recursive method
//1. It is a exponential method
//2. if we draw the tree for the recursion we will see the algorithm starts from the top and answer is generated when we come up from down
// and that's why this method is called "top-down approach"
//3. Looking at the tree we can tell that the algorithm makes many overlapping recursive calls which is unnecessary
//4. If we can store the result and stop the algo from making those calls than that method will be called memorisation
int RecursiveLCS(string s1, string s2, int i , int j ){
    if(i>=s1.length() or j >=s2.length()){
        return 0;
    }
    else if(s1[i]==s2[j]){
        return 1+RecursiveLCS(s1, s2, i+1, j+1);
    }
    else {
        return max(RecursiveLCS(s1,s2,i+1, j),RecursiveLCS(s1,s2,i,j+1) );
    }
}
//dynamic programming method
    int dynamicLCS(string s1, string s2){
        int n = s1.length(), m = s2.length();  // creating the size of matrix
        int dp[n+1][m+1];  // keeping an additional row an coloumn to intialise first row and coloumn as 0
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){  // intialising all values as 0
                dp[i][j] =0;
            }
        }

        for(int i=1; i<=n; i++){  // we are starting with one cause we dont wanna change the first column zero and one
            for(int j=1; j<=m; j++){
                if(s1[i-1]==s2[j-1]){   // -1 because we are startting with one
                    dp[i][j] = 1+dp[i-1][j-1];   // if match adding one to diagonal element
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);  // if not then taking max of upward and left handside column
                }
            }
        }
        return dp[n][m];
    }

int main(){
    string s1 = "abcdefghi";
    string s2 = "cdgi";
    int ans1 = RecursiveLCS(s1, s2, 0 , 0);
    int ans2 = dynamicLCS(s1, s2);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}