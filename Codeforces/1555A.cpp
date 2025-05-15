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
		ll n; cin>>n;
		if(n<=6){
			cout<<15<<"\n";
			continue;
		}
		if(n%2==1){
			n++;
		}
		cout<<n/2*5<<"\n";
	}
}
