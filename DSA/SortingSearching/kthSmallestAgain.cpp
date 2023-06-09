#include <bits/stdc++.h>
using namespace std;

//This question is asking to search the kth smallest element if exist in the given range in sorted order. It can be solved by creating a array of
//of all the element in the given ranges and then sort the array and prlong long int kth element
//but this solution creates some problem
//1. the size if array can be 10^1=-18 to 10^18 -> using such large space can cause TLE
// So what we can do is , instead of using the array we will search the ranges in sorted order and see in which range the element can exist
//for ex - (a,b), if b-a+1>k then kth element must exist in this range adn the answer will be b+k-1 but this also creates a problem
// there can be range with overlapping sequences for ex-> (2,4) (3,2)
// so first we need to merge these long long intervals

//this whole question can be solved in three steps
//1. Sorting
//2. Merging
//3. Searching

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n , q;
		cin>>n>>q;
        vector<pair<long long int,long long int>>range;
        //taking the input of the ranges
        for(long long int i=0; i<n;i++){   
            long long int a, b;
            cin>>a>>b;
            range.push_back({a,b});
        }
        //sorting
        sort(range.begin(),range.end());
        //merging long long intervals
        long long int indx = 0;  // as we are merging inplace so the array will also contain some duplicaates ranges at end, the indx will help us to kee
                       // the track of last unique range
        for(long long int i=1; i<range.size(); i++){
            if(range[indx].second >=range[i].first){
                range[indx].second = max(range[indx].second,range[i].second);
            }
            else{
                indx++;
                range[indx] = range[i];  // to remove any duplicates if any in between
            }
        }

        // searching
        while(q--){
            long long int k;
            cin>>k;
            long long int ans =-1;
            for(long long int i=0; i<=indx;i++){
                if(range[i].second - range[i].first +1 >= k){
                    ans = range[i].first +k -1;
                    break;
                }
                else{
                    k-= range[i].second - range[i].first +1;  // we have update aur k because we have includes the previous elements in count
                }
            }
            cout<<ans<<endl;
        }
        
    }
}