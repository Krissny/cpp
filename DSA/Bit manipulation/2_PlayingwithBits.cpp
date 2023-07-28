#include <bits/stdc++.h>
using namespace std;
//there are some terminolgy that should be known, let's define them first
//indexing of bits
//the bits are indexed from right to left
// 1 0 1 0 0 1  -> lets take this as an example
// 5 4 3 2 1 0 -> these are the indexing , 
// the bits are often referred as 0th bit , first bit and so on
//There arae two more terms that are used LBS(least significant bit) and MSB(most significant bit)
//here the LSB is 0th bit and MSB is 5th bit or nth bit
//SET BIT AND UNSET BIT
//set bit -> it simply means that the bit is 1(like 0th bit is set)
//unset bit -> it simply means that the bit is 0(like 1st bit is unset)

//TO CHECK WHETHER A BIT SET OR NOT
/*
to check ith bit of a number is set or not what we can do is we can take
a number whose only ith bit is set and find the "and" of these both
numbers , and this will return true only if  the ith bit of the number will be set
for ex- number = 10101 where we have to check first bit for set or not?
so we have to take a number whose only 1st bit is set -> 00010
so , 10101 & 00010 -> 0(false)
The question is how we get this number ( whose ith bit is set), well 
lets say we  di this 1<<1(as we need to check 1st bit)-> this will give us
10 whose 1st bit is set, lets genralise it -> 1<<i where is i is the ith bit we need to check
//now if we lok at the result obtain from left shift of , all shift to i represetns a number which is power of 2
One thing to note is that the numbers just berfore these 2 powers are represented by only ones, lets take an example
1000(which is 2^4) so if we subtract 1 from this no
111(notice how there are three 1s for the binary number with four nums)
wh
*/
void printBinary(int num){
    for(int i =10; i >=0; --i){
        cout<<((num>>i) &1); // here we are shifting the ith bit to first position and the doing and with 1 whic will only be one  first position is 
        //also we can modify it a little to count the set bit
        //count+=((num>>i) &1);
    }
    cout<<endl;
}

int main(){
    printBinary(9);
    //lets write a function to check if the ith bit set or not
    int a =9;
    int i =1;
    if(a & (1<<i)!=0) cout<<"Set"<<endl;
    else cout<<"Not Set"<<endl;

    //what to do  if we want to set the ith bit
    //just like what we did above,, we take a number such that it has the ith bit set
    //and we do an or(|) with the 'a' to set bit at ith position
    printBinary(a | (1<<i));
    //Now what if we want to unset the ith bit, well for that we need a number
    //whose ith bit is not set and all other bits are set. Then how we find that number. Lets think if we have anumber whose ith bit is set and all other bits 
    //are not set ,We can easily get a bit with ith bit unset all other bit are set by taking a invert of this number
    // HOW EXACTLY WE TAKE A INVERT
    //well there is a operator for that which is called tilda(~)
    printBinary(a&(~(i<<3)));
    //Lets say we have to toggle(on/off) the value at ith index
    printBinary(a^(1<<2));

    //counting the no of bits in a integer
    int ct=0;
    for(int i = 31; i>=0; --i){
        if((a & (1<<i))!=0){
            ct++;
        }
    }
    cout<<ct<<endl;
    //there is also a inbuilt fuction to count the set bits
    cout<<__builtin_popcount(a)<<endl;//this only works for integer
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;
}