/*
Recursion:A function that calls itself is called recursive function
if we define a function like
void func(){
    func()
}
so if you call this function it will create a infinite loop and cause segmentation error
but why segmentation error why not runtime error as it creates an infinite loop
This  ,is so beacause recursion works on stacks an stacks have a limited alloted memory and
when it exceeds we get segmentation error(segmentation error is related to memory)
*/

#include <iostream>
using namespace std;

// void func(int n){
//     if (n==0) return;
//     //cout<<n<<endl;   // this is printed out when function goes downward
//     func(n-1);
//     cout<<n<<endl; // this is printed out when function comes upward in a stack
// }

//lets solve a simple q, which is to print factorial of N
/*
to solve or make a recursive function , you need to thik about it like a mathematical 
function , for ex- a factorial function should be like f(n) =(n)(n-1)(n-2)..1
now if you write that functio in terms of itself , you can write a recursive function
so we can write the factorial func as . f(n)=f(n-1)(n) , which is written in terms of itself
*/
int fact(int n){
    if(n==0) return 1; //this is the base condition and every recursive function requires that
    return fact(n-1)*n ;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);

}
//Time complexity of recursive function depends on two things
//1.Number of function call -> n
//2.What is complecity of each function? ->O(1)
// final complexity of func O(n^2)