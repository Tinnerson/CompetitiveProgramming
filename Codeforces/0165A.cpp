#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	int x[n], y[n];
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	int c=0;
	int le=false, ri=false, lo=false, up=false;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(x[j]>x[i] && y[j]==y[i]){
				ri=true;
			}
			else if(x[j]<x[i] && y[j]==y[i]){
				le=true;
			}
			else if(x[j]==x[i] && y[j]<y[i]){
				lo=true;
			}
			else if(x[j]==x[i] && y[j]>y[i]){
				up=true;
			}
		}
		if(ri && le && lo && up){
			c++;
		}
		ri=false;
		le=false;
		lo=false;
		up=false;
	}

	cout<<c<<"\n";
} 
