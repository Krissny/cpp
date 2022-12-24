/*so in this question we have to print a pattern 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/


#include <iostream>
//the whole game of this question to how you tell the compiler where to print 0 and where to print 1

int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++ ){ // for rows
        for(int j=1; j<=i ; j++){ //for col
            int value = i+j; // here if you see pattern the element is the function of the summation of its rows and col
          if(value%2==0){   // if the summation is even , the element is 0
            std::cout<<"1 ";  
          }
          else {           // if not then its zero
            std::cout<<"0 ";
          }
        }
        std::cout<<"\n";
          
        

    }
}
//Alternative sol is same as mine