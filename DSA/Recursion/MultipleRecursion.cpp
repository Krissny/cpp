#include <bits/stdc++.h>
using namespace std;

int fibbonacci(int n){
    if(n<=1){
        return n;
    }
    return fibbonacci(n-1)+fibbonacci(n-2);
}


int main() {
	int ans = fibbonacci(4);
    cout<<ans<<endl;;
}