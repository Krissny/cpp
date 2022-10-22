//Instead of using iterators, one can use ranged based loops to iterate
//over containers
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   vector<int> v= {2,3,4,5,6,7};
  // to iterate over this vector 
  //we will start with range based loop, in which we iterate directly over elements of container
  for(int value: v){ // here first 2-> value , then 3->value and so on
    // in above thr element value are being copied in the value, you can use reference for them
    cout<<value<<" "; //dont need to use index , as the value directly comes in variable
  }
  cout<<endl;
  //this method works for all containers as well as it saves a lot of time
  //lets use this same method for pairs
  vector<pair<int, int>> vp ={{2,3},{4,5}};
  for(pair<int,int> &value : vp){
    cout<<value.first<<" "<< value.second <<endl;
  }
 // this can also be used on maps
}
