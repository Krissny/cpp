/*linear Search, so what you need to do  is to search a given number in array and 
print its index no
linear search is represented by O(n) which means algorithm takes proportionally longer
to complete as the input grows

*/
#include <iostream>
using namespace std;

int linearSearch (int array[], int size, int Num){  //creatting a function, cause  DRY
    for(int i=0; i<size; i++){
        if(Num==array[i]){
             cout<< i;
        }    
    }
    return -1;
}

int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int Num;
    cin>>Num;
    linearSearch(array, size, Num);
    
    
}

/*
Understanding time complexity
1. After first iteration, length of array -> n
2. After second iteration, length of array -> n/2
3. After third iteration, length of array -> n/

*/