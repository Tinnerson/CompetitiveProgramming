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
		int n=s.size();
		char a[n];
		for(int i=0; i<n; i++){
			a[i]=s[i];
			//cout<<"a[i]: "<<a[i]<<"\n";
		} 
		
		
		sort(a, a+n);
		for(int i=0; i<n; i++){
			cout<<a[i];
		}
		cout<<"\n"; 
	}
}
