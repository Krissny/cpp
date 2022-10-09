//vectors of vectors
#include <iostream>
#include <vector>
using namespace std;
/*what was happending in the array of vectors was that , it 
was kind of a 2D array with fixed no of rows but variable no of coloumns
but what if we also want variable number of coloumn, there, we will need 
vector of vector
*/
void printV(vector<int> v  ){    // here when we are passing v , we are creating a copy , instead of this we can pass &v which will save time   
    for(int i =0; i<v.size(); i++){ //here we use a function v.size(), to get the no of elemnents
        cout<<v[i]<<" "; //v.size() time complexity  is 0(1)
    } 
}

int main (){
    int N; 
    cin>>N;
    vector<vector<int>> v; // here v is storing vectors inside it
    for(int i =0 ; i<N; i++){
        int n; //size of ith vector
        cin>>n;
        //taking input in a vector of vector
        vector<int>temp; //a temporary vector for storing values of vector
        for(int j =0 ; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x); // putting values in temp vector
        }
        v.push_back(temp); //putting that vector inside a vector
    }
    for(int i=0; i<v.size(); i++){
        printV(v[i]);
    }
}
/*if it is a pair , then ,.first and .second is use and if it is a vector than
.pushback and .popback , .vsize()


*/