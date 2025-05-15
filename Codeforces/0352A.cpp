#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	int a[n];
	bool hasZ=false;
	int f=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]==0){
			hasZ=true;
		}
		else if(a[i]==5){
			f++;
		}
	}
	
	if(hasZ && f<9){
		cout<<0<<"\n";
		return 0;
	}
	if(!hasZ){
		//cout<<"f: "<<f<<"\n";
		cout<<-1<<"\n";
		return 0;
	}

	sort(a, a+n, greater<int>());

	ll b=f%9;
	while(b--){
		for(int i=0; i<n; i++){
			if(a[i]==5){
				a[i]=-1;
				break;
			}
		}
	}

	for(int i=0; i<n; i++){
		if(a[i] != -1){
			cout<<a[i];
		}
	}
	cout<<"\n";

} 
