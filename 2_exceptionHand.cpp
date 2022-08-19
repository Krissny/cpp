#include <iostream>
#include <string>
using namespace std;
//here we will understand how to handle error
/*the three important terms that one should understand
are:- try, catch and throw*/
class Printer { //here we have created a class
    string _name; //attribute no.1
    int _availablePaper; //attribute no.2
    public:
    Printer(string name, int paper){ //here is our constructur
        _name =name;
        _availablePaper=paper;
    }
    void print(string textdoc){   //here we define a method
    //the calculation below tells how much paper is needed to print txtdoc
        int requiredPaper=textdoc.length()/10; // 40/10 = 4, so it requiews 4 sheets to print the document
        if(requiredPaper==_availablePaper){
            throw "No paper";  //Here this throw can be of any data type
            // lets say that we are going to throw an integer
          //  throw 101; note that to handle this you will require a diff catch block
        }
        cout<<"Printing..."<< textdoc<< "\n";
        _availablePaper-=requiredPaper; // here we decrease the amount of paper left
    }


};

int main(){
     
Printer myPrinter("HP Deskjet", 4); // here we create an object
//here we have created a try block, we will try to execute whats inside an if any exception happens we will try to handle it with catcg
try{
    myPrinter.print("Hello my name is Krishna.");
    myPrinter.print("Hello my name is Krishna.");
    myPrinter.print("Hello my name is Krishna.");
}
catch(const char *txt){
    cout <<"Exception:" << txt << endl;
}
//so if we want to catch an integer throw, also you can write multiple catch block for 1 try block
/*catch(int exCode){
    cout <<"Exception:" << exCode << endl;
}*/
//we also have a default exception handler, which can handle any type of exception
catch(...){
    cout<<"Exception Happened!"<<endl; // if you put this default handler at the top of txt handler , its going to handle all exception, even the char type
}
}