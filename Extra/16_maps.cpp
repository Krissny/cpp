//maps are used to store key value pairs
#include <iostream>
#include <string>
#include <map>    //you have include maps to use them
using namespace std;


int main(){
	map<string,int> marksMap; //here we are defining the data type of key and value pair
	marksMap["Krish"] = 98;
	marksMap["Neha"] = 96;
	marksMap["Rajul"] = 98;
	map<string,int>::iterator itr; // :: -> is calles scope resolution operator
	for(itr=marksMap.begin(); itr!=marksMap.end(); itr++){
		cout<<(*itr).first<<" "<<(*itr).second<<"\n";
	}
	

	return 0;
}
