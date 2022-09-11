//PAIRS

#include <iostream>
using namespace std;

int main(){
     pair<int,string> p;  //pair syntax
   //  p= make_pair(2, "abc"); //intialiszing pair
     p = { 2,"abc"}; // you can also intialize it using curly braces
   //  pair<int, string> p1 = p; //used to create a copy of a pair
     pair<int, string> &p1 = p; // passing by reference chnages the orignal value
     p1.first =3;
     cout<<p.first <<" "<<p.second <<endl;
    /* int a[] ={ 1,2, 3};
     int b[] = {2, 3, 4};
     */
     pair<int, int> p_array[3]; //can also declare a array with pairs
     p_array[0] = {1,2};
     p_array[1] = {2,3};
     p_array[2] = {3,4};
     for(int i =0 ; i<3; i++){
          cout<<p_array[i].first <<" "<<p_array[i].second<<endl;
     }





}