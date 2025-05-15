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
		int n;
		cin>>n;
		if(n==1){
			cout<<1<<"\n";
			continue;
		}
		for(int i=2; i<=n+1; i++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
