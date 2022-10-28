/*
All the operation in sets like .find, .insert have time complexity log(n)
as the internal implementation of sets are based on red black tree(self balancing trees)

*/
#include <iostream>
#include <unordered_set>
using namespace std;

void print(unordered_set<string> &s){
	for(string value :s){
		cout<<value<<" "<<endl;
	}
	for(auto it = s.begin(); it!=s.end() ; it++){
		cout<<(*it)<<endl;
	}
}
//unordered sets should be used where order doesn't matter , you just need to check the presence of the value

int main() {
	unordered_set<string> s;  //syntax for declaring unordered set
	s.insert("abc"); // O(1)
	s.insert("zsdf");
	s.insert("bcd");
    s.insert("abc");
    print(s);
	
	/*
	Unordered set used hash table. and in un ordered set you can have complex key 
	structire like pair,and set because theor hash function is mot definined in inbuilt
	libraries
	*/
}