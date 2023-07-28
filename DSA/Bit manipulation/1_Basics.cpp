#include <bits/stdc++.h>
using namespace std;
//Binary numbers- 0 and 1 
 /*
 0 - 0
 1 - 1
 2 - 10
 3 - 11
 4 - 100
 */
// if you notice every  odd number a has 1 but at end and it make sense
//as 2^0 should be added to make the numbers odd
//Binary operators
/*
AND(&) 0 0 -> 0     1 1 ->1     0 1 -> 0
OR(|)  0 0 -> 0     1 1 ->1     0 1 -> 1
XOR(^) 0 0 -> 0     1 1 ->0     0 1 -> 1  ( this one is very tricky)
NOT(!) 1 -> 0       0 -> 1
*/
//LEFT SHIFT AND RIGHT SHIFT OPERATIONS
/*
Left shift(<<)
lets take an example:- 3 << 1 -> this shift the binary number by one bit to the left
11(3) ->(shift to left by 1)-> 110(6) ( as we shift 11 to left a zero id added)
what will 3 << 2 will do then?
11(3) ->(left shift by 2) -> 1100(12)
*/
/*
Right shift(>>)
example ; - 3 >> 1
11(3) -> (right shift by 1) -> 1(1) ( as we shift 11 to right 1 to the right gets deleted)
*/

int main(){
//lets play with the 'int' variable , we know that int in cp is 32 bit
    cout<<INT_MAX<<endl;
    /*
    lets see a shorcut for calculating 2 power
    1 << 0 -> 1 (1) (2^0)
    1 << 1 -> 10 (2)(2^1) 
    1 << 2 -> 100 (4)(2^2)
    1 << 3 -> 1000 (8)(2^3)
    I think you got the idea, so to calculate 2^n , you just have to do 1<<n
    lets see now
    */
//    int a = (1<<32) -1; -> this will give error because (1<<32) which is nothing but 2^32 will be stored in 33 bits and then we will -1, and 1 
// int the (1<<32), expression is a int , hecne it is overflowing it
    int a = (1LL<<32) -1; // what we did is we make 1 a long long
   cout<<a<<endl; // u will sill that this will give -1 , that means it overflows
   //but why , int stires 32 bits , then it should work na?, the answer to that is
   // yes int stores in 32 bit but it is a signed variable that means , it store both positive and negative values
   // an one bit is assigned to mark whether the value is + or -
   unsigned int b = (1LL<<32) -1; // this is a unsigned int
   //which means it stores vlaues positive only so , it can store more the signed one , and that's why it didn't overflow
   cout<<b<<endl;
   // so the INT_MAX value should be calculated following
   int x = (1LL<<31) -1;
   cout<<x<<endl;

}