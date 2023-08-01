#include <bits/stdc++.h>
using namespace std;

long long divide(long long dividend, long long divisor) 
    {
        //as the numbers are both negative and positive, we need to determine whether our quotient will be 
        // positive or negative 
        //if both dividend and divisor are of same size , then it is positve otherwise negative
        int sign = ((divisor < 0) ^ (dividend < 0)) ? -1 : 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0;
        long long temp =0; // helper variable
        for(int i =31; i>=0; i--){
            if(temp+(divisor<<i) <= dividend){
                temp+=divisor <<i;
                quotient |= 1LL<<i;
            }
        }
        if(sign==-1) quotient =-quotient;
        return quotient;
    }

int main(){
    
}