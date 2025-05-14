#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, p, q, x=0;
	cin>>n;

	while(n--){
		cin>>p>>q;
		if(q-p>=2){
			x++;
		}
	}
	
	cout<<x<<"\n";

}
