#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	int c=0;

	for(int i=1; i<n-1; i++){
		if(a[0]<a[i] && a[n-1]>a[i]){
			c++;
		}
	}
	cout<<c<<"\n";
}
