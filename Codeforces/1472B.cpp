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
		int n; cin>>n;
		int a, x=0, y=0;
		for(int i=0; i<n; i++){
			cin>>a;
			if(a==1){
				x++;
			}
			else if(a==2){
				y++;
			}
		}

		if(x%2==0 && x != 0){
			cout<<"YES\n";
		}
		else if(x%2==0 && y%2==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
 
