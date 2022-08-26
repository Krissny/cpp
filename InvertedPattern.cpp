/*these are a bit advanced problem, the pattern that you have to print is:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/



#include <iostream>
//before solving there are three things you should know before solving a pattern questiom
//Rows, coloumn and elements

int main(){
    
    int n ;
    int count = 1; //here i set up a count to print elemrnt 
    std::cin>>n;
    for(int i =n; i >0 ; i--){ //this loop takes care of rows
        for(int j =i ; j>0 ; j--){  // using the counter value above , this loop decides how many elements to print
            std::cout<< count<<" ";
            count+=1;                //here i keep increasing the loop by one to print next element
        }
        count =1;   //after the loop exits the row , i set it to 1 again
        std::cout<<"\n";
    }
}

/*Alternative sol-> here it doesn't uses a count

for(int i =1 ; i <=n ; i++){
    for(int j=1; j<=n+1-i ; j++){  // the condition for last row element is find out and set
        std::cout<<j<<" ";
    }
    std::cout <<"\n";
}

*/