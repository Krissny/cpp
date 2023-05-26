#include <bits/stdc++.h>
using namespace std;

#define d 256  // No of characters in the input alphabaets(total no of ASCII characters)-> 10 in abdul bari example


void RabinKarp(string text, string pat , int q){
    int M = pat.length();
    int N = text.length();
    int i , j;
    int p = 0;  // hash value of pattern
    int t = 0;  // hash value of text
    int h =1 ;// this will store the value of d^m-1(10^2)-> M is the size of pattern

    for(i=0; i<M-1; i++){
        h =(h*d) %q;  //-> we are doing it this way cause we dont want the value to over flow while calculating (h=pow(d, M-1)%d)
    }

    //No we will calculate the hashing value of the pattern and first window
    for(i=0; i<M; i++){
        p = (d*p + pat[i])%q;
        t = (d*t + text[i])%q; // this mathrmatical operation considering the whole loop is same as (a , b, c)-> 1*10^2 +2*10^1 +3*20^0
    }

    for(i=0; i<=N-M; i++){
        if(p==t){
            for(j=0; j<M ; j++){
                if(pat[j]!=text[i+j]){
                    break;
                }
            }
            if(j==M){
                cout<<"Pattern is found at index: "<<i+1<<" and ends at "<<i+1+M<<endl;
            }
        }
        if(i<N-M){
            t = (d*(t-text[i]*h) + text[i+M])%q;   //this function is analogous to what abdul baari said, to move toward next window 
                                                   // you just minus the intial value from sum and add the next window last element
                                                   // similar to 1-> (abcd)-> movinf to bcd -> (1*10^2 + 2*10^1 + 3*10^0 - 1*10^2)* + 4

            if(t<0){
                t= (t+q);
            }
        }

    }
}

int main(){
    string text ="ccaccaaedba";
    string pat ="dba";
    int q = INT_MAX; // we are gonna use this number for finding modulus
    RabinKarp(text,pat,q);
    return 0;
}