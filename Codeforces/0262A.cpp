#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k, b;
	cin>>n>>k;
	int c=0;
	string a[n], t;
	for(int i=0; i<n; i++){
		cin>>a[i];
		t=a[i];
		b=0;
		for(int j=0; j<t.size(); j++){
			if(t[j]=='4' || t[j]=='7'){
				b++;
			}
		}
		if(b<=k){
			c++;
		}
	}
	cout<<c<<"\n";

}
