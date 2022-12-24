#include <iostream>
class MyClass{
    public:
    MyClass(){
        std::cout<<"The start\n";    //this is a constructor
    }
    void myPrint(){ 
        std::cout <<"Hello!\n";      // a method define in class
    }
    ~MyClass(){
        std::cout<<"The end";       //the destructor
    }
};

int main(){
   MyClass obj; 
   MyClass *ptr =&obj;    //using a pointer to acess obj
   ptr->myPrint();  //here we are using an arrow selection operator(->)
 
}