/*In this question , we will print half inverted pyramid, with only
a number n given by user, the pattern will look something like this

* * * * *
* * * *          for n=5
* * *
* *
*


*/
#include <iostream>

int main(){
    int n ;
    std::cin>>n; //here we take input from user
    for(int i=n; i>0; i--){ //set a counter to count the no of rows
        int j=i;    //i tired to use thr same int i for while loop but it will set 
        while(j){           // the i value to zero when while lop exits and for loop will not proceed further
            std::cout<<"*";
            j--;
        }
        std::cout<<"\n"; //and this is the linebreak
    }

}
/*Alternative sol

for(int i =n; i>=1;i--){
    for(int j=1; j<=i; j++){ // here they used a for loop instead of a while loop, with a slightly diff counter setup
        cout<<"*";
    }
    std::cout<<"\n";
}

*/