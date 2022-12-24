#include <iostream>
class MyClass{
    public:
    //member intialization may be used for regular variables but it must be used for const variable
    MyClass(int a , int b):regVar(a) ,constVar(b) //here we are using member intializers to intialize a const var after its declaration
    {   
      std::cout<<regVar<<"\n" ;
      std::cout<<constVar<<"\n";
    }
    private:
    int regVar;
    const int constVar;
   
};

int main(){
    MyClass obj(42,33); 
   
}