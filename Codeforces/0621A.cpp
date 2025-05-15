#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, e=0, o=0, s=0, t;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==1){
			o++;
		}
	}

	sort(a, a+n);

	if(o%2==0){
		for(int i=0; i<n; i++){
			s+=a[i];
		}
		cout<<s<<"\n";
		return 0;
	}
	else if(o%2==1){
		//cout<<"elif"<<"\n";
		for(int i=0; i<n; i++){
			if(a[i]%2==1){
				t=i;
				//cout<<"t: "<<t<<"\n";
				break;
			}
		}
		for(int i=0; i<n; i++){
			//cout<<"bruh: "<<i<<"\n";
			if(i != t){
				s+=a[i];
				//cout<<"s: "<<s<<"\n";
			}
		}
		cout<<s<<"\n";
		return 0;
	}
}
