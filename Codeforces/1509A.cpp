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
		int a[n], e[n], o[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			e[i]=-1;
			o[i]=-1;
			if(a[i]%2==0){
				e[i]=a[i];
			}
			else if(a[i]%2==1){
				o[i]=a[i];
			}
		}
		for(int i=0; i<n; i++){
			if(e[i] != -1){
				cout<<e[i]<<" ";
			}	
		}
		for(int i=0; i<n; i++){
			if(o[i] != -1){
				cout<<o[i]<<" ";
			}
		}
		cout<<"\n";
	}
}
 
