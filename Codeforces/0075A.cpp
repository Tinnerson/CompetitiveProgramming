#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, ab;
	cin>>a>>b;
	ab=a+b;
	string abs = to_string(ab);
	abs.erase(remove(abs.begin(), abs.end(), '0'), abs.end());
	ab=stoi(abs);
	//cout<<"ab: "<<ab<<"\n";

	string as = to_string(a);
	string bs = to_string(b);

	as.erase(remove(as.begin(), as.end(), '0'), as.end());
	bs.erase(remove(bs.begin(), bs.end(), '0'), bs.end());

	a=stoi(as);
	b=stoi(bs);

	//cout<<"a: "<<a<<", b: "<<b<<"\n";

	if(ab==a+b){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
}
