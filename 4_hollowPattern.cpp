/*In this question , you have to print a hollow rectangle
 with rows and col given by user, its should look like
 * * * * 
 *     *       rows =5
 *     *       col =4
 *     *
 * * * *
 
 */

#include <iostream>

int main(){
    int rows, col;
    std::cin>>rows>>col;   // here I store the data entered by user in rows and col
    for(int i =1; i<=rows;i++){ //A counter for rows
        for(int j=1 ; j<=col ; j++){ // Am embeded counter for col
            if(i==1 || i==rows)   // condition so that , the continous star lines are only printed in 1st and last row
            std::cout<<"* ";
            else {           //in this block i define the other two condition
                if (j ==1 || j ==col){   // condition for printing corner peripherry star
                    std::cout<<"* ";
                }
                else{
                    std::cout<<"  "; //for printing empty spaces
                }
            }
        }
        std::cout<<"\n";   
        }
    
    
        
    
}
//alternative solution
/*

for(int i=0 ; i <=rows ; i++){
    for(int j =0 ; j<=col; j++){
        if(i==0 || i ==rows || j==1 || j==col){  //the only difference between upper method and this one is that we have clubbed the condition as the result is same
            std::cout<<"*";
        }
        else{
            std::cout<<" ";
        }
    }
}

*/