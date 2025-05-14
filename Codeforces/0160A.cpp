#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t=0, s=0, c=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		t+=a[i];
	}

	sort(a, a + n, greater<int>());

	while(s<=t/2){
		s+=a[c];
		c++;
	}

	cout<<c<<"\n";
}

