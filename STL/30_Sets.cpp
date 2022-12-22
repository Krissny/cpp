/*
Just like in maps we used to store keys and value . here in sets we just store
keys in sets, set is same as in maths,here we are going to discuss three types of
sets:-
1. Normal sets
2. Unordered set
3. Multisets
same as in maps but multiset are used a lot unlinke multipmaps

*/
#include <iostream>
#include <set>
using namespace std;
//defining a function to print values
void print(set<string> &s){
	for(string value :s){
		cout<<value<<" "<<endl;
	}
	for(auto it = s.begin(); it!=s.end() ; it++){
		cout<<(*it)<<endl;
	}
}

int main() {
	set<string> s; // syntax of set ,u can declare set for any data type
	//just like maps , it stores keys in sorted order
	//inserting values in set
	s.insert("abc"); // log(n)
	s.insert("zsdf");
	s.insert("bcd");
	// accesing values in sets
	auto it= s.find("abc"); // s.find  is used to access value and time complexity is log(n)
	/*there is always a chance of getting segmentation error when we use 
	.find operartors because if the value doesn't exist then the value will be
	.end()
	 */
	if(it != s.end()){
		cout<<(*it);
	}
	if(it != s.end()){
		s.erase(it);   //s.erase can also work like s.erase("abc")
	}
	print(s);
}
