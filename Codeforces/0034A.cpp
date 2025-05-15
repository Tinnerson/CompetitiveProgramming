#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, d=1001, mp1, mp2;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int j=0; j<n-1; j++){
		if(abs(a[j]-a[j+1])<d){
			mp1=j;
			mp2=j+1;
			d=abs(a[j]-a[j+1]);
		}
	}
	if(abs(a[0]-a[n-1])<d){
		mp1=n-1;
		mp2=0;
	}

	cout<<mp1+1<<" "<<mp2+1<<"\n";
}
