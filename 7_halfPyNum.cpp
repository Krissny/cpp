/*in this question we have to print a half pyramid using numbers , which will look
something like this
1
2 2
3 3 3
4 4 4 4
5 5 5 5

*/
#include <iostream>

int main(){
    int n ; //declaring a integer n
    std::cin>>n; //storing userinput in n
    for(int i =1; i<=n; i++){ // A loop to print each row
        for(int j =1;j<=i ; j++){ //another loop to column with logic that determines the no of time it gets repeated using the row value i.e i
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
}
//alternative sol was same as done by me