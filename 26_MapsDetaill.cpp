/* So there are basically two types of maps:
 1. Maps
 2. Unordered maps
 3. Multimaps (just touch the surface cause dont use so much in cp)
Map is basically a data structure which stores key value pairs
the main difference between ordered and unordered is that in ordere they are sorted
for ex- if 1->a , 3->b , 2->d, in ordered then value will be stored like , first 1 , then 2 amd then third(in ordered way)
internal implementation is by using red black trees -> a very complex data structure
*/
#include <iostream>
#include <string>
#include <vector>
#include <map> // here map is included
using namespace std;

int main(){
  map <int,string> m; //syntax for maps
  //putting values in maps
  m[1] = "abc"; // Olog(n) -> time complexity of insertion in maps
  m[2] = "cdc";
  m[3] = "acd";
  //one important thing to keep in mind , is that time complexity of insertion also
  //also depends upon the type of key you are inserting
  // for ex- m["abcd"] = "abcd" will have time complexity of s.size()*log(n), because in order create a ordered map
  // the values of the key have to be compared
  //m[3]="kre" if we do this , the value of key 3 will be replaced by kre
  //another way to insert values in maps is by insert
  m.insert({4,"afg"}); // in this bracket you have to enter a pair, you can declare a pair by either using pair or by curly braces
  //more functions on maps
  auto it1 = m.find(7) ;//this will return an iterator, it is also 0(log(n))
  //if there is no value for 3 , it will return m.end
  if (it1!=m.end())
    m.erase(it1); // it take key as well as value as input, it is also Olog(n)
  //m.clear can be used to clear the whole map
  if(it1 == m.end()){
    cout<<"No Value"<<endl;
  }
  else{
    cout<<(*it1).first <<" "<<(*it1).second<<endl;
  }

  // declaring iterators long way
  map <int,string > :: iterator it;
  for(it = m.begin(); it!=m.end(); it++){
    cout<<(*it).first <<" "<<(*it).second <<endl;
  }
   // using short way to declare the iterator
   for( auto &value : m){ // the process of getting out a value is also olog(n)
    cout<<value.first <<" "<<value.second<<endl;
   }



}