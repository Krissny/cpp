#include <bits/stdc++.h>
using namespace std;

// We are going to see three algo  all_of, none_of and any_of
// basically these statment return true and false

//Lambda function brief
//Lambda function are small syntax for writing temporary function


int main(){
    //Lets say we have an integer we want to add 2 to it and we have to write
    //a lambda function for it
    cout<<[](int x){ return x+2;}(2)<<endl; // the syntax here is [][type x]{ return something;}(value passed)
    cout<<[](int x, int y){return x+y;}(2,3)<<endl ;//sum of two numbers
    // you can assign these lambda function to some variable also
    auto multi = [](int x, int y){return x*y;};
    cout<<multi(2,3)<<endl;

    //lets declare a vector
    vector<int>v ={2,3,5};
    cout<<all_of(v.begin(), v.end(),[](int x){return x>0;}); // what is happening in this function is that is takes every value and applies this function and  if any value is false then all_of will give false , it will return true only when all values are true
    cout<<any_of(v.begin(), v.end(),[](int x){return x>0;}); //if any element is true for given condition then it will return true
    cout<<none_of(v.begin(), v.end(),[](int x){return x>0;});
    // if not any element is  true , then it will retuen true
    //these all function can be applied on arrays also
}