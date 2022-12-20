#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool ArmstrongChecker( string n){
	int len = n.length();  // this will give us the power up to which I have to raise the individual value to check
	int arr[len];  
	for(int i=0; i<len; i++){  // a loop to iterate over the string and store the number in a array so that I can operate on it
		if(n[i]=='1'){
			arr[i]= 1;
		}
		else if(n[i]=='2'){
			arr[i] = 2 ;
		}
		else if(n[i]=='3'){
			arr[i] = 3 ;
		}
		else if(n[i]=='4'){
			arr[i] = 4 ;
		}
		else if(n[i]=='5'){
			arr[i] =  5;
		}
		else if(n[i]=='6'){
			arr[i] = 6;
		}
		else if(n[i]=='7'){
			arr[i] = 7 ;
		}
		else if(n[i]=='8'){
			arr[i] = 8 ;
			
		}
		else if(n[i]=='9'){
			arr[i] = 9 ;
		}
		else if(n[i]=='0'){
			arr[i] = 0 ;
		}
	}
	int sum=0;
	for(int i=0; i<len; i++){
		sum +=pow(arr[i],len); // the calculations
	}
	int num = stoi(n); // to convert the n(which i took input as a string) to integer, because you cant compare an int with a string
	if(sum==num){
		return true;
	}
	else{
		return false;
	}
	

}

int main(){
	string number;
	cin>>number;
	if(ArmstrongChecker(number)){
		cout<<"Yes it is a Armstrong number"<<endl;
	}
	else{
		cout<<"No its not an Armstrong number"<<endl;
	}

}