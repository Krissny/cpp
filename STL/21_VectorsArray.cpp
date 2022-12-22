//diffrence between array of vectors and vectors of vectors
#include <iostream>
#include <vector>
using namespace std;

void printV(vector<int> v  ){    // here when we are passing v , we are creating a copy , instead of this we can pass &v which will save time   
    for(int i =0; i<v.size(); i++){ //here we use a function v.size(), to get the no of elemnents
        cout<<v[i]<<" "; //v.size() time complexity  is 0(1)
    } 
}

int main (){
    //lets talk about first array of vectors
    int N; //no of vectors user want in an array
    cin>>N;
    vector<int> v[N]; // here we have created N vectors of size 0, vectors of vector are a diffrent thing
    for(int i =0 ; i<N; i++){
        int n; //size of ith vector
        cin>>n;
        for(int j =0 ; j<n; j++){
            int x;
            cin>>x;
            v[i].push_back(x); // putting values in ith vector
        }
    }
    for(int i=0; i<N; i++){
        printV(v[i]);
    }
}