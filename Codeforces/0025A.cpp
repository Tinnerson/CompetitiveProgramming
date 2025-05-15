#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, e=0, o=0;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0){
			e++;
		}
		else if(a[i]%2==1){
			o++;
		}
	}

	if(e>=o){
		for(int j=0; j<n; j++){
			if(a[j]%2==1){
				cout<<j+1<<"\n";
			}
		}
	}
	else if(o>=e){
		for(int l=0; l<n; l++){
			if(a[l]%2==0){
				cout<<l+1<<"\n";
			}
		}
	}
}
