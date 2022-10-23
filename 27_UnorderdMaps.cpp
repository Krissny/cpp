//unordered Maps
/* the main differences between ordered and unordered maps are following:
1. inbuilt implementation
2. Time complexity
3. valid  keys datatype
Everything else is same and all functions are same as the ordered maps
*/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    //declaration of unordered maps
    unordered_map<int,string> m;  //syntax for declaration
    m[1] = "abc"; 
    m[2] = "cdc";
    m[3] = "acd";
    m[5] = "ecd";
    m[4] = "ald";
    for(auto &value : m){
    cout<<value.first<<" "<<value.second<<endl; // this will print keys in random order
  }
 /*
 As stated above there is a difference between inbuilt implementation,UM use hashtable while M used trees.
 Every key in UM creates a hash value.
 The second is time complexity-> O(1) for both insertion and acessing value
 everything else is same as maps
 third is Valid keys datatypes , in maps we can insert many types of data types
 but not in UM, for example
 unordere_map<pair<int, int>, string > m; would not work
 */

}