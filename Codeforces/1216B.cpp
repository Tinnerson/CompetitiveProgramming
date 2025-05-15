#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=i;
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	int c=1;
	for(int i=1; i<n; i++){
		c+=(1+a[n-i-1]*i);
	}
	
	cout<<c<<"\n";
	
	for(int i=n-1; i>=0; i--){
		cout<<b[i]+1<<" ";
	}
	cout<<"\n";
}
