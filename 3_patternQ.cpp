/*So the qustion in that you have to print the pattern given below, where user decides no of rows and col

* * * *
* * * *
* * * *
* * * *
* * * *

*/


#include <iostream>

int main(){
    int rows , col ;
    std::cin >>rows >>col; // storing the input from user
    int noElements = rows*col;  // no of element is equal to rows into col
    for(int i = 1; i <=noElements ; i++){ //the loop runs till all elements are printed
        if(i%col==0){      // this condition starts a new line when no of col is done for one row
            std::cout<<"*\n";
        }
        else{
        std::cout << "* ";  //here star is printed for every new row until new row starts
        }   
    }
    
}
//alternative solution
/*
for(int i==1; i <=row ; i++){
    for(int j =1 ; j<=col; i++){ 
        std::cout << "*";
    }
    std::cout<<"\n";
    */
