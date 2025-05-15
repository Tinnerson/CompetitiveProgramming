#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, a, b, nx, nxp, bcc=0, bccp=0;
	cin>>n>>m>>a>>b;
	
	nx = n;
	nxp = n;
	
	
	float af = a*1.0;
	float bf = b*1.0;
	float mf = m*1.0;

	float bc = bf/mf;

	if(a<=bc){
		cout<<n*a<<"\n";
		return 0;
	}
	if(bc<=a){
		while(nx>=m){
			nx-=m;
			bcc++;
			//cout<<nx<<" "<<bcc<<"\n";
		}
		while(nxp>=0){
			nxp-=m;
			bccp++;
			//cout<<nxp<<" "<<bccp<<"\n";
		}
		if(bccp*b<=nx*a+bcc*b){
			cout<<bccp*b<<"\n";
		}
		else{
			cout<<nx*a+bcc*b<<"\n";
		}
	}
	
}
