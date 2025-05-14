#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;

	int a, b, p=0, m=0;

	for(int i=0; i<n; i++){
		cin>>a>>b;
		p -= a;
		p += b;
		if(p>m){
			m = p;
		}
	}	

	cout<<m<<"\n";
}

