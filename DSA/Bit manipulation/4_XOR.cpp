#include <bits/stdc++.h>
using namespace std;

int main(){
     //here we will be using xor so lets recap xor operations
     /*
     1 1 -> 0
     0 0 -> 0
     1 0 -> 1
     0 1 -> 1
     And one more property to look is XOR of a number with itself is zero
    101 XOR 101 = 000
    other propert is that if we xor a number with 0 , it will return the same
    number
    101 XOR 000 -> 101
    if we summarise these properties then
    X^X = 0
    X^0 = X
    There is one more property that is 
    x^y^z = y^z^x = z^x^y
    In simple language XOR is associative in nature
    Now let see how we are gonna use this property to swap numbers
     */
    int a =4, b =6;
    a = a^b;
    b = b^a; // now here what we are doing is:  b= b^(a^b)-> b^a^b -> b^b^a(asocitive property)-> 0 ^ a( b^b=0) -> a (0 ^a =a)
    a = a^b; //a = (a^b)^a (as a is a^b and b is a) -> b (similarly as above)
    // cout<<a<<" "<<b<<endl;
    /*
    Given an array of integers. All integers are present in event count except one. Find that one integer which has odd count in 0(N) tine complexity and O(1) space
    N< 10^5
    s
    a(i) < 10^5
    */
   int n ;
   cin>>n;
   int x;
   int ans =0;
   for(int i =0; i<n; i++){
        cin>>x;
        ans ^=x;
   }
   cout<<ans<<endl;
   //the above question is modified to make a new question
   //check 2nd question of bit manipulation in excel
}