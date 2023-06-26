#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin>>s;
		unordered_map<char, int> m;
		for(int i=0; i<s.size(); i++){
			m[s[i]]++;
		}
		int count1 =0;
		for(auto &c : m){
			if(c.second>=2){
				count1++;
			}
		}
		if(count1>=2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
