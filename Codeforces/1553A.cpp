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
		int a;
		cin>>a;
		int c = a/10;
		if(a%10==9) c++;
		cout<<c<<"\n";
	}

}
