#include <bits/stdc++.h>
using namespace std;
/*
Given two numbers X and Y, and a range [L, R] where 1 <= L <= R <= 32. You have to copy the set bits of 'Y' in the range L to R in 'X'. Return this modified X
*/
int setSetBit(int x, int y, int l, int r){
        // code here
        for(int i =l-1; i <r; i++){
            int set = 1;
            set = y & (set<<i);
            x = x | set;
        }
        return x;
    }
int main(){

}