/*This question is a bit difficult , here we have to print a pattern that 
looks like butterfly
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int num =2*n;   // Here I use num variable to store the total no of rows which is double of user input
    for(int i=1;i<=num;i++ ){    //for rows
        for(int j=1;j <= num; j++){  //for col
        //the pattern is print in two parts 
           if(i <=n+1){                     //condition checks for upper part
                if(j<=i or j > num-i){     // for star
                    std::cout<<"*";
                }
                else{
                    std::cout << " ";
                }
           }
          else{
            if(j<=(num-i)+1 or j >=i){  //for star in lower part
                    std::cout<<"*";
                }
                else{
                    std::cout << " ";

           }
        }
    } std::cout<<"\n";

}
}
/*Alternative sol
this solo take advantage that, c++ proceed with from above tp below

for(int i=1;i<=n;i++){  //here n is the user input
    for(int j=1; j<=i; j++){
        std::cout<<"*";
    }
    int space =2*n-2*i; //this  figures out no of spaces based on input and row no
    for(int j=1;j<=space; j++){
        std::cout<" ";
    }
    for(int j=1; j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>=n;i--){  //here the counter and condition are changed to print same pattern in reverse order
    for(int j=1; j<=i; j++){
        std::cout<<"*";
    }
    int space =2*n-2*i; 
    for(int j=1;j<=space; j++){
        std::cout<" ";
    }
    for(int j=1; j<=i;j++){
        cout<<"*";
    }
    cout<<endl;


*/