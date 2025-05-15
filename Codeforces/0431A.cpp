#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[4], c=0, ti;
	for(int i=0; i<4; i++){
		cin>>a[i];
	}
	string s, t;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		t=s[i];
		ti=stoi(t);
		c+=a[ti-1];
	}
	cout<<c<<"\n";
}
