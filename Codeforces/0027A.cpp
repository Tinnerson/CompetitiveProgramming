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
		//cout<<"a[i]: "<<a[i]<<"\n";
	}
 
	if(n==1 && a[0]==1){
		cout<<2<<"\n";
		return 0;
	}
	else if(n==1 && a[0] != 1){
	    cout<<1<<"\n";
	    return 0;
	}
	
	sort(a, a+n);
	//cout<<"now\n";
	
	//for(int i=0; i<n; i++){
	//    cout<<"a[i]: "<<a[i]<<"\n";
	//}
	int t=1;
	for(int i=0; i<n; i++){
		//cout<<"i, a[i]: "<<i<<" "<<a[i]<<"\n";
		//cout<<"t: "<<t<<"\n";
		if(a[i] == t){
			t++;
		}
		else{
			cout<<t<<"\n";
			return 0;
		}
	}
 
	cout<<t<<"\n";
 
 
} 
