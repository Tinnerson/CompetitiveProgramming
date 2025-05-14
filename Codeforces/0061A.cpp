#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string a, b, c="";
	cin>>a>>b;

	for(int i=0; i<a.size(); i++){
		if(a[i]=='0' && b[i]=='0'){
			c+='0';
		}
		else if(a[i]=='0' && b[i]=='1' || a[i]=='1' && b[i]=='0'){
			c+='1';
		}
		else{
			c+='0';
		}
	}

	cout<<c<<"\n";
}
