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
		ll n, l, r, k;
		cin>>n>>l>>r>>k;
		ll a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]<l || a[i]>r){
				a[i]=-1;
			}
		}
		sort(a, a+n);
		int c=0;

		for(int i=0; i<n; ++i){
			//cout<<"bc: "<<c<<"\n";
			//cout<<"bk: "<<k<<"\n";
			if(k-a[i]<0){
				//cout<<"cm: "<<c<<"\n";
				break;
			}
			if(a[i] != -1){
				k-=a[i];
				c++;
			}
			//cout<<"ac: "<<c<<"\n";
			//cout<<"ak: "<<k<<"\n";
		}
		cout<<c<<"\n";


	}
}
