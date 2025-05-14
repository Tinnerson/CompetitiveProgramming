#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, c=0, x, y, z;
	string a, b;
	cin>>n>>a>>b;

	for(int i=0; i<n; i++){
		x = abs(a[i]-b[i]);
		y=10-abs(a[i]-b[i]);

		c+=min(x, y);
	}

	cout<<c<<"\n";


}
