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
		int a[n], s=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			s+=a[i];
		}
		if(s%n != 0){
			cout<<-1<<"\n";
			continue;
		}
		int c=0;
		float f=s*1.0/n;
		for(int i=0; i<n; i++){
			if(a[i]>f){
				c++;
			}
		}
		cout<<c<<"\n";
	}
}
 
