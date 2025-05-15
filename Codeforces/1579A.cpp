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
		int a=0, b=0, c=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='A'){
				a++;
			}
			else if(s[i]=='B'){
				b++;
			}
			else if(s[i]=='C'){
				c++;
			}
		}
		if(a+c==b){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
 
