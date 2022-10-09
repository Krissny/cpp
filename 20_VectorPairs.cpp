//nesting in vector
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printV(vector<pair<int,int>> v  ){    // here when we are passing v , we are creating a copy , instead of this we can pass &v which will save time   
//modified the parameteres of function to store pair 
    for(int i =0; i<v.size(); i++){ //here we use a function v.size(), to get the no of elemnents
     // imagine v[i] here as a pair , so its first element will ve v[i].first and second element will be v[i],second
        cout<<v[i].first<<" "<<v[i].second<<endl; //v.size() time complexity  is 0(1)
    } 
}

int main(){
    vector <pair<int, int >>v; //according to this every element of this vector will be a pair
   // taking input in a vector pair
   int n;
   cin>>n;
   for(int i =0; i<n; i++){
    int x, y; //the two pair values
    cin>> x >> y;
    v.push_back({x,y}); // one can also take this value as v.push_back(make_pair(x,y));
}
    printV(v);
}