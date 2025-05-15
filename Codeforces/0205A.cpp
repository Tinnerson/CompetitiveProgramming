#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, min, minp;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	
	sort(b, b+n);
	min=b[0];
	if(n>1){
	    if(b[0]==b[1]){
		    cout<<"Still Rozdil"<<"\n";
		    return 0;
	    }
	}
	
	for(int j=0; j<n; j++){
		if(a[j]==min){
			minp=j;
		}
	}


	

	cout<<minp+1<<"\n";
}
