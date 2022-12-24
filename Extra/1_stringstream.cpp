#include <iostream>
#include <string>
#include <sstream> //need to include this to use string stream
using namespace std;
/*to covert diffrent types into string,there are three
ways.*/
//using stringstream class
//using to_string method
//using boost.lexiacal cast
//here we will learn about stringstream
int main(){
// we will start with taking an integer input which we will later convert to string.
cout << "Enter an integer value"<<"\n";
int input;
cin>>input;
//so stringstream is a class so , we first need to create a class with it
stringstream  ss;
ss << input; //here we store the integer into ss object, remember that its "<<" not ">>"
string str; //creating a string to store the converted integer
ss >> str;  //here we store it in str string,remember that its ">>" not "<<"
cout<<"The integer number: "<<input<<"\n";
cout<<"The string form of converted number:"<<str;


}