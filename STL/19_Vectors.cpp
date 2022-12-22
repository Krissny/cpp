//arrays are continuous block of library(size cannot be changed )
// vector are variable datatypes(dynamic database)
// always keep refrences in mind while using vector
//with using datatypes in vectors, we can also use containers like pairs, vectors->vector<vector>v;
#include <iostream>
#include <vector>
using namespace std;

void printV(vector<int> v  ){    // here when we are passing v , we are creating a copy , instead of this we can pass &v which will save time   
    for(int i =0; i<v.size(); i++){ //here we use a function v.size(), to get the no of elemnents
        cout<<v[i]<<" "<<endl; //v.size() time complexity  is 0(1)
    } 
}

int main(){
    vector<int> v; // syntax of vector vector<datatype> name, currently size is 0
    // vector<int> c(10, 3)-> this will create a vector of size 10 and prefill all values as 3
    //taking input in a vector
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x); //0(1) , pushes elements in the back
    }
    printV(v);
    v.pop_back(); //removes element from behind , and this is also of 0(1) time complexity
    printV(v);
    //vectors can be directly copied
    vector<int> v2 = v; // v2 is a copy of v2 , time complexity is O(n) //expensive operation
    printV(v2);

}
