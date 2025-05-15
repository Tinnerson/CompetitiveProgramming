#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, h=0, t=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]==100){
			h++;
		}
		else if(a[i]==200){
			t++;
		}
	}

	//cout<<"h: "<<h<<"\n";
	//cout<<"t: "<<t<<"\n";

	if(h>0){
		if(t>0){
			if(h==2*t){
				cout<<"YES"<<"\n";
			}
			else if(h%2==0 && t%2==0){
				cout<<"YES"<<"\n";
			}
			else if(h%2==0 && t%2==1){
				cout<<"YES"<<"\n";
			}	
			else{
				cout<<"NO"<<"\n";
			}
		}
		else{
			if(h%2==0){
				cout<<"YES"<<"\n";
			}
			else{
				cout<<"NO"<<"\n";
			}
		}
	}
	else{
		if(t>0){
			if(t%2==0){
				cout<<"YES"<<"\n";
			}
			else{
				cout<<"NO"<<"\n";
			}
		}
		else{
			cout<<"bruh"<<"\n";
		}
	}
	
}
