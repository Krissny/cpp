/*
PRECOMPUTATION is a technique which tells how to decrease time complexity of program
Given T test cases and in each test case a number N. Print  its factorial
for each test cse % M
where M = 10^9 +7

Constraints
1<=T<= 10^5
1<= N <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main(){
    // fact[0] = fact[1] = 1;
    // for(int i=2; i<N; i++){
    //     fact[i] = fact[i-1]*i;
    // }
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    //old code
    // long long fact =1;
    // for(int i=2; i<=n;i++){
    //     fact = (fact*i)%M;
    // }
    cout<<fact[n]<<endl;
    }
    //The time complexity is O(T*N) = 10^10 -> so if the time for code to run is 1sec, TLE error will occur
    // The idea hear to avoid this is to precompute the value
    // thr commented code is example
}