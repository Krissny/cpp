/*In this question we are going to print a half pyramid after 180 degree rotaion

        *
      * *                for n =5
    * * *
  * * * *
* * * * * 

*/
#include <iostream>

int main(){
    int n ;
    std::cin>>n;
    for(int i=0; i<n; i++){ //set a for loop for rows
        for(int j=n; j>0 ; j--){ //here i have set for loop for col in reverse, so that i can print spaces also
            if(j-1>i){    // a condition that checks for position of spaces
            std::cout<<" "; //prints spaces
            }
            else{
              std::cout<<"*";  //you can add space if you want
            }
        }
        std::cout<<"\n"; // a linebreak
    
}
}
/*Alternative sol
for(int i=1; i<=n;i++){
    for(int j =1 ; j<=n; j++){
        if(j<=n-i){                //same logic just the comparision variables are diffrent
           std::cout<<" ";
        }
        else{
            std::cout<<"*";
        }
    }
    std::cout<<"\n";
}

*/