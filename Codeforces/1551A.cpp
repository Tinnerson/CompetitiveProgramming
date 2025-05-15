#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, x, y;
	cin>>n;
	int a;
	double t;
	for(int i=0; i<n; i++){
		cin>>a;
		t=a*1.0;
		t=t/3;

		//cout<<"t: "<<t<<"\n";
		x=floor(t);
		y=ceil(t);
		//cout<<"x y: "<<x<<" "<<y<<"\n";
		//cout<<"x+2*y: "<<x+2*y<<"\n";
		//cout<<"2*x+y: "<<2*x+y<<"\n";
		if(x+2*y==a){
			cout<<x<<" "<<y<<"\n";
		}
		else if(2*x+y==a){
			cout<<y<<" "<<x<<"\n";
		}
	}
}
