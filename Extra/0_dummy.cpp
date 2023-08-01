#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i =31; i >=0; --i){
        cout<<((num>>i) &1); 
    }
    cout<<endl;
}
int power(int n){
    int i =0;
    while(n >= 1<<i){
        i++;
    }
    return i-1;
}
int solve(int n, int p){
    if(p<=0){
        return 0;
    }
    int a = power(p);
    int ans =(n<<a) + solve(n ,p-(1<<a));
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<solve(n,n)<<endl;
}