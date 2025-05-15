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
		int n;
		cin>>n;
		if(n<2020){
			cout<<"NO\n";
			continue;
		}
		int a=n%2020;
		float b=n/2020;

		if(a<=b){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	//4041=x2020+y(2020+1)=x2020+y2020+y=(x+y)2020+y
	//n%2020=y
	//n/2020=y+x
}
