#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s, t;
	cin>>s>>t;
	
	reverse(s.begin(), s.end());

	if(s == t){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
}
