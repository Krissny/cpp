//We are going to study nesting
#include <bits/stdc++.h>
using namespace std;

int main(){
//     map<pair<int,int>,int> m; // in map now the key is a pair but as maps store keys in sorted order , how it gonnna store pair in sorted order
//     pair<int,int> p1, p2;
//     p1 ={1,2}; // the pairs are first compaired on the basis of their first element, and if they are equal then second element is compaired
//     p2 ={2,3}; // similarly they will be stored in on the basis of sortion in maps
//    // cout<<(p1>p2)<<endl;
//     //now lets say we have a complex insertion like
//     map<set<int>,int> m1;
//     set<int> s1 ,s2;
//     s1 ={1,2,3};
//     s2 ={2,3};
    //cout<<(s1 < s2); // similarly sets are compared 
    //every data structure that can be compared ,can be inserted in case of maps
    // insertion in complex data types
    map<pair<string, string>,vector<int>>a; // let say we are given first name last name and a integer related with that name
    int t ;
    cin>>t;
    for(int i=0; i<t; i++){
        string fn, ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j =0; j<ct; j++){
            int x;
            cin>>x;
            a[{fn,ln}].push_back(x); //here we dont need to define the vector structure again as we have already defined it in maps, here the a[{fn,ln}] acts as  a vector

        }
    }
        for(auto &pr : a){
            auto &full_name = pr.first;
            auto &list = pr.second;
            cout<<full_name.first <<" "<<full_name.second<<endl;
            cout<<list.size()<<endl;
            for(auto &element : list){
                cout<<element<<" ";
            }
            cout<<endl;
        }
    }
    