#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int tml = k * l;
	//int tls = c * d
	
	int t = tml/nl;
	int tl = c * d;
	int ts = p/np;
	
	int tt;

	if(t<=tl && t<=ts){
		tt = t/n;
	}
	if(tl<=t && tl<=ts){
		tt = tl/n;
	}
	if(ts<=t && ts<=tl){
		tt = ts/n;
	}

	cout<<tt<<"\n";
}
