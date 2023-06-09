#include <bits/stdc++.h>
using namespace std;

bool canCowsPlaced(int mindis, vector<int>barns , int c){
    int pos = barns[0];  // being greedy to  amke max poosible distace , we place our first cow at pos 1 
    int count =1;  // as one cow is already places
    for(int i=1; i<barns.size();i++){   // checking each position
        if(barns[i]-pos >=mindis){
            count++;
            pos =barns[i];   // pos of last cow placed
        }
        if(count==c){  // if all cows are places
            return true;
        }
    }
    return false;
}

int BinarySearch(vector<int>barns,int c, int low, int high){
    int res =1;  // to store the minmum distance
    while(low<=high){
        int mid = low +(high-low)/2;
        if(canCowsPlaced(mid,barns,c)){
            res = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>barns;  // this will store the position of barns
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            barns.push_back(x);
        }
        sort(barns.begin(),barns.end());  // sorting as barns are not given in sorted order
        int ans = BinarySearch(barns,c,barns[1]-barns[0],barns[n-1]-barns[0]);  //  binary search for minimal possible distance
        cout<<ans<<endl;
    }
}