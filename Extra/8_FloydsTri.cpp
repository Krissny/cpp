/*In this question we are going to print Floyd's Triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <iostream>

int main(){
    int n , //n for userinput 
    value =1; // here i declare a value , more like count to keep track of cureent value
    std::cin>>n;
    for(int i=0; i<n; i++){ 
        for( int j=0; j<=i ;j++){
            std::cout <<value<<" ";   // as the value is independent of rows and colum , it just iterates as the each element is print
        value+=1; 
        } 
        std::cout<<"\n";
    }

}
/*Alternative Sol
same as above just used count instead of value

*/