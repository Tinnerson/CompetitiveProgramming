#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin>>n;
	if(n==0){
		cout<<1<<"\n";
		return 0;
	}
	int a[5] = {6, 8, 4, 2, 6};
	cout<<a[n%4]<<"\n";
}
