#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin>>n>>k;

	string s;
	int c=n;
	for(int i=0; i<n; i++){
		cin>>s;
		sort(s.begin(), s.end());
		s.erase(unique(s.begin(), s.end()), s.end()); 
		//cout<<"s: "<<s<<"\n";
		for(int i=0; i<=k; i++){
			string t=to_string(i);
			char ti=t[0];
			if(s[i] != ti){
				c--;
				break;
			}
		}
	}

	cout<<c<<"\n";
	
}
