#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, s1=0, s2=0, ti;
	cin>>n;
	string s, t;
	cin>>s;
	int a[n];
	for(int i=0; i<n; i++){
		t=s[i];
		ti=stoi(t);
		a[i]=ti;
		if(a[i]==4 || a[i]==7){
			continue;
		}
		else{
			cout<<"NO"<<"\n";
			return 0;
		}
	}

	for(int i=0; i<n/2; i++){
		s1+=a[i];
	}
	for(int i=n/2; i<n; i++){
		s2+=a[i];
	}
	if(s1==s2){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}


}
