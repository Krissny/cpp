//multiset allows multiple key to be stored
#include <iostream>
#include <set>
using namespace std;

void print(multiset<string> &s){
	for(string value :s){
		cout<<value<<" "<<endl;
	}
	// for(auto it = s.begin(); it!=s.end() ; it++){
	// 	cout<<(*it)<<endl;
	// }
}


int main() {
	multiset<string> s;   //syntax for declaring multiset
	s.insert("abc");  // 0log(n)
	s.insert("zsdf");
	s.insert("bcd");
    s.insert("abc");
	auto it =s.find("abc");
	// if(it!=s.end()){   // while here , the first abc value get deleted as the iterator return , point towards first value
	// 	s.erase(it);
	// }
	s.erase("abc");  // this deletes all abc 
	//you can also use 
    print(s);
}
	
	