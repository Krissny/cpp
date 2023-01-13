#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
//   mostly inbuilt functions are written in such a way that you required to give
//   two value, first the starting and second the ending point of arraay to consider
int min = *min_element(v.begin(), v.end()); // this return a pointer in case of arrays
cout<<min<<endl;
int max = *max_element(v.begin()+3, v.end());
cout<<max<<endl;
int sum = accumulate(v.begin(), v.end(),0); // the last paramenter here is known as initial sum
cout<<sum<<endl;
int ct = count(v.begin(), v.end(),6);
cout<<ct<<endl;
int element = *find(v.begin(),v.end(),2);//will return last iterator if not found
cout<<element<<endl;
reverse(v.begin(), v.end());
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" "<<endl;
}
cout<<endl;
//these all functions work in O(n) as internally they are using a loop to do things

}