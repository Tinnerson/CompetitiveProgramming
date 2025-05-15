#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll a, b, s;
	cin>>a>>b>>s;

	a=abs(a);
	b=abs(b);

	ll t=a+b;

	//cout<<"a: "<<a<<", b: "<<b<<", a+b: "<<a+b<<", s: "<<s<<"\n";

	if(a+b>s){
		cout<<"No"<<"\n";
		return 0;
	}

	if(a+b==s || (s-a-b)%2==0){
		cout<<"Yes"<<"\n";
	}
	else{
		cout<<"No"<<"\n";
	} 
}
