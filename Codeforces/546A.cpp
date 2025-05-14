#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int k, n, w, s=0;
	cin>>k>>n>>w;

	for(int i=0; i<=w; i++){
		s+=i*k;
	}

	if(n>=s){
		cout<<0<<"\n";
	}
	else{
		cout<<abs(n-s)<<"\n";
	}
}
