#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, d, c=0;
	cin>>n>>d;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i != j && abs(a[i]-a[j])<=d){
				c++;
			}
		}
	}

	cout<<c<<"\n";
}
