#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x[110];
	cin>>n;

	double a=0.0, s=0.0;

	for(int i = 0;i<n; i++){
		cin>>x[i];
		s+=x[i];
	}
	
	a=s/n;

	cout<<a<<"\n";
}
