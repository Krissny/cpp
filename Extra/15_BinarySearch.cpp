/* BINARY SEARCH(Reduces time in searching)
imagine you are given a stack of test papers arranged roll no wise and you have to find yours
from the stack , what you gonna do, check one by one ?NOO, you are gonna just randomly part
the stack in two and then if the roll no in below stack is less than yours , then your 
test paper is in this stack and if not than the other.
That is BINARY SEARCH.
Requirement for binary search is that, it should be a sorted array
the concept is to create a starting point and end point to search the numbers, while reducing
the search elemrnts,
use this array to visualise it {8, 10, 12, 21, 27, 34, 42}, here you have to find 
27

*/
#include <iostream>
using namespace std;
int binarySearch(int array[], int size, int Num){
   int s =0;   //starting point 
   int e =size; //end point
   while(s<=e){   //if the starting and search point became same , then  the search is done
     int mid = (s+e)/2;  //mid point of array
     if(array[mid]==Num){   //if thr mid point is equal to no we are finding
        return mid;
     }
     else if (array[mid]>Num){ //if mid point is greater than num , that the num must occur before it, so we move the end point behind it
        e =mid-1;
     }
     else {
        s = mid+1;  //if mid point is less than num than , it must be after it so we mover our starting point
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
    cout<<binarySearch(array,size,Num )<<endl;
}