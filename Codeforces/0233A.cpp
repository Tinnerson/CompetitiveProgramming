#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t;
	cin>>n;
	int a[n];

	if(n==1){
		cout<<-1<<"\n";
		return 0;
	}
	
	for(int i=0; i<n; i++){
		if(n-i-2>0){
			a[i]=n-i-2;
		}
		else{
			a[i]=n+n-i-2;
		}
	}

	for(int i=1; i<=n; i++){
		t=a[i-1];
		//cout<<"i: "<<i<<", a[t]: "<<a[t]<<", a[i]: "<<a[i]<<"\n";
		if(a[t-1] == i && t != i){
			//cout<<"cont"<<"\n";
			continue;
		}
		else{
			cout<<-1<<"\n";
			return 0;
		}
	}

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
