#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2,s3;
    cin>>s1>>s2>>s3;
    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = s3.length();
    if(s1.length()+s2.length()!= s3.length()) cout<<"No"<<endl;
    else{
        
        int i=0 , j=0, k=0;
        while(k<l3){
            if(i < l1 and s1[i]==s3[k]){
                i++;
                k++;
            }
            else if(j<l2 and s2[j]==s3[k]){
                j++;
                k++;
            }
            else{
                k++;
            }
        }
        if(i==l1 and j ==l2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}