#include <bits/stdc++.h>
using namespace std;
void printBinary(int N){
    for(int i=10; i>=0; --i){
        cout<<((N>>i)&1);    
    }
    cout<<endl;
}
int main(){
    //odd Even
    //so before we move to odd and even lets see the binary representation of some nubers
    // for(int i=0; i<8; i++){
    //     printBinary(i);
    //     //Modification1
    //     if(i&1){
    //         cout<<"Odd"<<endl;
    //     }
    //     else{
    //         cout<<"Even"<<endl;
    //     }
    // }
    //if you observe the binary numbers printed from above loop, you will see
    //that the odd numbers have 1 at the end of their binary numbers while even ones dont
    //So can we utilise this fact to print odd and even numbers
    // we can take the and between first bit of a number and 1, if its 1
    // then it is odd else it is even
    //you can see this in above code as modification 1
    //***NOTE**
    // Modulo(%) and division(/) operator are very slow as compared to the bit manipulation technique, so you can avoid them if you want

    //MULTIPLY AND DIVISION BY 2 USING BIT MANIPULATION
    int c = 5;
    //to dvide by 2 we can right shift the bits by 1
    cout<<(c>>1)<<endl;
    //to multiply we can left shift the bits by 1
    cout<<(c<<1)<<endl;
    //SO IT WORKS BUT WHAT IS GOING ON?
    // 101(5) -> 2^2(1) + 2^1(0) + 2^0(1)
    //10(2) -> 2^1(1) + 2^0(0) (right shift)
    //1010(10) -> 2^3(1) + 2^2(0) + 2^1(1) +2^0(0);

    //UPPERCASE TO LOWER CASE
    //we know that internally all characters are ASCII values
    //lets print some uppercase and lowercase binary representation
    for(char i = 'A'; i<'E'; i++){
        cout<<i<<" ";
        printBinary(int(i));
    }
    for(char i = 'a'; i<'e'; i++){
        cout<<i<<" ";
        printBinary(int(i));
    }
    //if you notice the slight diff between upper and lower case characters, the fifth bit in lowecase character is set
    //so the convert a upper case to lower case , we just have to set the 5th bit in upper case
    char A = 'A';
    char a = A | (1<<5);
    cout<<a<<endl;
    //Now if we want to convert out 'a' to uppercase we have to unset the 5th bit now
    cout<<char(a&(~(1<<5)))<<endl; //char tyorcast is used to avoid it from printing ASCII values
    //this is a cooler way but do you wanna
    // (1<<5)-> which char does it represents in char lets see
    cout<<char(1<<5)<<endl; // it empty becasue it is just space " "
    //so what if take an "or" bw A uppercase letter and space
    cout<<char('C' | ' ')<<endl;
    // so now if we want to convert lowercase to upercase we should do and &(and) with ~(' ')
    //NO WE CANT DO THIS
    // becasue the inverse of space is a very large value and our ASCII value are upto 256 only 
    //~(' '), has very large value due to trailing ones so , if we just convert the trailing one after the fifth bit , our binary number should work but char will change and the character in underscore(_)
    cout<<char('c' & '_')<<endl;

    //UNSET i BITS FROM LSB(LEAST SIGNIFICANT BIT)
    //one way to do it is using a for loop to unset the bits till i
    //But how we do it in one operation
    //We can do it , but before that lets see something first
    // say a binary number is is "00001100001"
    //we want to unset the bits till 5th so for this we will require a binary like "11111000000"
    //which is a inversion of "00000111111"
    //and this can be obtained from "00001000000 -1"
    //and this number 00001000000 is nothing but 1<<6
    //so what we can do is we can take and with this -> ~(1<<6-1)
    int k = 59;
    int i=4;
    printBinary(k);
    printBinary(k & (~((1<<(i+1))- 1)));

    //Now if we  have to unset i bits from MSB
    //say a binary number is is "00001100001"
    //lets say we want to unset the first  MSDs upto 3 bit
    //for that we would require a binary number like "00000001111"
    //and this binary number is nothing but "00000010000-1"
    //and it can be written as ((1<<(3+1))-1)

//This whole thing to figure out how to set and unset will help
//you solving the problems of binary number
    int j =3;
    printBinary(k & ((1<<(j+1))- 1));

    //HOW CHECK IF A NUMBER IS IN 2 POWER OR NOT
    int p =16;
    if(p & (p-1)){
        cout<<"Not power of 2"<<endl;
    }
    else{
        cout<<"Power of 2"<<endl;
    }
    //The logic is pretty straight forward
    //we know that two power is like -> "0001000"
    //and for thi its (n-1) will be ->  "0000111"
    //and if we find and(&) of both it will be 0
}