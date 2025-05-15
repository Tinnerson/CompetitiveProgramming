#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		string s, t;
		cin>>s;
		ll ti, a[s.size()];
		for(int i=0; i<s.size(); i++){
			t=s[i];
			ti=stoi(t);
			a[i]=ti;
		}
		sort(a, a+s.size());
		cout<<a[s.size()-1]<<"\n";         
	}
}
