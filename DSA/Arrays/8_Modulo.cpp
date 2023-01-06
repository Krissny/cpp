//PRECOMPUTATION TECHNIQUE
/*
Lets first see some modular arithmetic
->(a+b)%M = ((a%M)+(b%M))%M
->(a * b)%M = ((a%M)*(b%M))%M
-> (a-b)%M = ((a%M)+(b%M + M))%M

but why we need this formulas in  programming and why in many cp problem it is
written to print answer modulo. Lets see an example->
Given a number N. Print its factorial.
Constraints
1<=N <= 100
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long fact =1;  // factorial increases very quickly
    // for(int i=2; i<=n;i++){
    //     fact = fact*i;
    // }
    cout<<fact<<endl; // it will overflow at value like 21 as it cant contain it
    // so to avoid that it is written in question to print modulo
    // for example if it is given that to print module m where M is 47
    //considering the range, if 100% 47 , it is condirm that the result will always smaller than 47
    //but rhe problem is you cant calculate 100 factorial so how you gonna find its modulo
    // so here we use its properties
    int M = 47;
    for(int i=2; i<=n;i++){
        fact = (fact*i)%M;
    }
    cout<<fact<<endl;
    //sometimes the M value is given as 10^9 + 7 , so what is the significant of this value
    // there are major two significance
    /*
    1.  This value is very close to integer range, so many anser can be stored in integer
    2. MMI(Multiplicative inverse)-> as M isa prime number
    */

}