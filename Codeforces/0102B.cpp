#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, t;
	cin>>s;
	int n, ti, c=0;

	while(s.size()>1){
		n=0;
		for(int i=0; i<s.size(); i++){
			//cout<<"i: "<<i<<"\n";
			t=s[i];
			ti=stoi(t);
			n+=ti;
			//cout<<"t: "<<t<<", ti: "<<ti<<", n: "<<n<<"\n";
		}
		s=to_string(n);
		//cout<<"s: "<<s<<"\n";
		c++;
	}

	cout<<c<<"\n";
}
