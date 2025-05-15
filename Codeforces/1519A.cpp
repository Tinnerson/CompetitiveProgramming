#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int r, b, d;
		cin>>r>>b>>d;
		double f;
		double rf=r*1.0;
		double bf=b*1.0;
		double df=d*1.0;
		if(r>=b){
			f=rf/bf;
		}
		else if(b>=r){
			f=bf/rf;
		}
		
		//cout<<"f: "<<f<<", f-1: "<<f-1<<"\n";
		if(f-1<=df){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
