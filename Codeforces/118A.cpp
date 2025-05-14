#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s, t;
	cin>>s;

	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	ll n = s.size();

	for(ll i=0; i<n; i++){
		if(s[i]=='a' || s[i]=='i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'y'){
			continue;
		}
		else{
			t+='.';
			t+=s[i];
		}
	}

	cout<<t<<"\n";

}
