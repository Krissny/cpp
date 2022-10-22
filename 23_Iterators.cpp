//using iterators
#include <iostream>
#include <algorithm> 
#include <vector> 
#include <string>  
/*by using indexing we can acess elements of vectors and arrays but further we will
see, that in containers like maps, we can't use iteraators to acess the 
elements, for this we use iterators
*/

using namespace std;

int main()
//iterators like pointer type structures, pointers point to the adderess
{
 vector<int> v= {2,3,5,6,7}; //here this vector will be stored as a continuous chunk of memory
 for(int i=0; i<v.size(); i++){//something like this |2|3|5|6|7| |
    cout<<v[i]<<" ";
 }
 cout<<endl;
 vector<int>::iterator it =v.begin(); //here the first v.begin() points towards 2 while the v.end() points towards the next address of last element
 for(it =v.begin();it!=v.end(); ++it){
    cout<<(*it) <<endl;
 }
 cout<<(*it) <<endl; //starts from the 2
 cout<<(*(it +1)); // starts from 3, as it points to the next address from the start
 /*
 using it++,how it is differnt from using it+ 1
 when you use it++, moves to next iterator
 but when you use it+1, it moves to next location
 in vectors there is no difference between it+1 and it++ because
 vector is  continuous so it++ will also take you to next location but
 in maps and sets are not continuous
 s0 it++ will work in cases of maps and sets but it+1 will not
 */

//a special type of iterator use to acess the elements of pair
vector<pair<int, int>> vo ={{1,2},{2,3},{3,4}};
vector<pair<int, int>> :: iterator it2;
for(it2=vo.begin(); it2!=vo.end(); it2++){
    cout<<(*it2).first <<" "<<(*it2).second<<endl; //here first will get first element while second will get second element in pair
}
//there is also another way to write iterator for this pair
for(it2=vo.begin(); it2!=vo.end(); it2++){
    cout<<it2->first <<" "<<it2->second<<endl;  // this -> arrow is called selection operator
}
//(*it).first <=> (it->first) are  interchangable
//this method of writing short iterators for pair was interoduces in c++ 11


    
}