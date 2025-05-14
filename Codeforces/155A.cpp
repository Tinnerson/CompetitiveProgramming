#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;

	int x, a=0, l, h;
	
	cin>>x;
	l = x;
	h = x;

	for(int i=1; i<n; i++){
		cin>>x;
		if(x>h){
			h = x;
			a++;
		}
		if(x<l){
			l = x;
			a++;
		}
	}	

	cout<<a<<"\n";
}

