#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, s=0, x=0, y=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		s+=a[i];
	}

	if(s%2==0){
		for(int j=0; j<n; j++){
			if(a[j]%2==0){
				x++;
			}
		}
		cout<<x<<"\n";
	}
	else if(s%2==1){
		for(int l=0; l<n; l++){
			if(a[l]%2==1){
				y++;
			}
		}
		cout<<y<<"\n";
	}
}


