#include <bits/stdc++.h>
using namespace std;

// this is also based on the modification of binary search

bool isPossible(int mid, int l, vector<int>rating,int p){
    int time =0;
    int prata = 0;
    for(int i=0; i<l; i++){  // this function took a while to come up with , i was thinking of doing it in only one for loop
        int j =1;
        time =0;
        while(time <= mid){
            time += j*rating[i];
            if(time<=mid){    // instead of doing this i can start my j with 2 and intialize  time = arr[i]for every i iteration, had to do this bcz the prata count was increasing even though the time limit is crossed
                j++;
                prata++;
            }
        }
    }
    if(prata >=p){
        return true;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int l;
        cin>>l;
        vector<int>rating; 
        for(int i=0; i<l; i++){
            int li;
            cin>>li;
            rating.push_back(li);
        }
        sort(rating.begin(), rating.end()); // sorting it  so that we set low and high with it
        int low =1;   // taking the best case when only 1 prata is to be made and chef rating is 1
        int one = (p*(p+1))/2;  // as for a chef with rating 1 the time for p parathas is 1+2+3+4...+p which is p(p+1)/2 and for some other chef
        int high = rating[l-1]*one;  // l rating it will take l*(p(p+1)/2),worst condition will be when the worst rated chef is last in sorted rating list is tries to make p parata
        int res =-1;
        while(low<=high){
            int mid = low+ (high-low)/2;
            if(isPossible(mid, l,rating,p)){
                res =mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        cout<<res<<endl;
    }
}
