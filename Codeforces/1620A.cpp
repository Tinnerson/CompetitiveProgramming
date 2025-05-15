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
		string s;
		cin>>s;
		int n=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='N'){
				n++;
			}
		}
		if(n==1){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
}
