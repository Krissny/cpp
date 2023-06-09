
#include <bits/stdc++.h>
using namespace std;
//parametrize way
void fn(int i , int  sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    fn(i-1,sum+i);
}

//functional way
int fn1(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + fn1(n-1);
    }
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
	int n =3;
    fn(n,0);
    cout<<fn1(3)<<endl;
    cout<<factorial(3)<<endl;
}