#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string a, b, c;
	cin>>a>>b>>c;

	string x = a + b;

	sort(c.begin(), c.end());
	sort(x.begin(), x.end());

	if(c == x){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
}

