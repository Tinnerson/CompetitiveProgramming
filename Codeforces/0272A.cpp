#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, s=0, c=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		s+=a[i];
	}
	for(int i=1; i<=5; i++){
		if((s+i)%(n+1) != 1){
			c++;
		}
	}
	cout<<c<<"\n";
}
