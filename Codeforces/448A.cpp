#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[3], b[3], n;
	float x = 0.0, y=0.0, s=0.0;
	for(int i=0; i<3; i++){
		cin>>a[i];
		x+=a[i];
	}
	for(int j=0; j<3; j++){
		cin>>b[j];
		y+=b[j];
	}
	cin>>n;

	s+=ceil(x/5);
	s+=ceil(y/10);

	if(s<=n){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
	
}
