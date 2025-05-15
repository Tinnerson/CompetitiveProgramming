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
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		bool isTrue=true;
		for(int i=0; i<n-1; i++){
			if(a[i+1]-a[i]>1){
				isTrue=false;
				break;
			}
		}

		if(isTrue){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
