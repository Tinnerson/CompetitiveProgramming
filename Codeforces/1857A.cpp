#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		int a[n];
		int s=0;
		for(int j=0; j<n; j++){
			cin>>a[j];
			s+=a[j];
		}
		if(s%2==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}


	}
}
