#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, s;
	cin>>n>>s;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n-1; i++){
		//cout<<"a[i]: "<<a[i]<<"\n";
		s-=a[i];
		if(s==0 && i==n-2){
			cout<<"YES"<<"\n";
			return 0;
		}
		else if(s<0){
			cout<<"NO"<<"\n";
			return 0;
		}
	}

	if(s>=0){
		cout<<"YES"<<"\n";
	}
}
