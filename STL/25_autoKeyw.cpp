// using the auto keyword
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//using auto keyword , frees you form defining the type of data which has to iterate
int main(){
   vector<int> v= {2,3,4,5,6,7};
  for(auto value: v){   //instead pf using "int value ", we used "auto"
    cout<<value<<" "; 
  }
  cout<<endl;
  vector<pair<int, int>> vp ={{2,3},{4,5}};
  for(auto &value : vp){ // her instead of using "pair<int,int>" we will use auto
    cout<<value.first<<" "<< value.second <<endl;
  }
 // vector<int>::iterator it =v.begin(); -> this is npt needed if we just use auto
 for(auto it =v.begin();it!=v.end(); ++it){ // we use auto infront of it
    cout<<(*it) <<endl;
}
}
