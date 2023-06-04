#include <bits/stdc++.h>
using namespace std;

int runCustomerSimulation(int n , string seq){
	int res=0;
	int occu =0; // to keep the track of n
	unordered_map<char, int> m;  // we will use a map to keep track of customers which one coming which one is going,are the just came or leaving after using computer
	for(int i=0; i<seq.size();i++){
		if(occu <n and m[seq[i]]!=1){  // it means that there is computer for new customer
			m[seq[i]]++;
			occu++;
		}
		else if(m[seq[i]]==1){      // new computer are available as customer leave
			occu--;
		}
		else{
			res++;    // people who dont get any computers to use
		}

	}
	return res/2;
}

int main(){
	int n= 1;
	string seq = "ABCBCADEED";
	int ans = runCustomerSimulation(n, seq);
	cout<<ans<<endl;
}