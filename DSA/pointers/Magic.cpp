#include <bits/stdc++.h>
using namespace std;

void function2(){
    int f2;
    int *p1=&f2;
    for(int i =0 ; i<=20; i++){
        if(*(p1+i)==89){
            *(p1+i) =58;
        }
    }
}

void function1(){
    int f1 = 89;
    cout<<f1<<endl;
    function2();
    cout<<f1<<endl;
}

int main() {
  function1();
}
