#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, p=0, c=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int j=0; j<n; j++){
		//cout<<"testing j: "<<j<<"\n";
		if(a[j]>0){
			p+=a[j];
			//cout<<"p rn is: "<<p<<"\n";
		}
		else if(a[j]<0){
			if(p>0){
				p--;
				//cout<<"j jump: "<<j<<"\n";
				//cout<<"p rn is: "<<p<<"\n";
			}
			else{
				c++;
				//cout<<"c rn is "<<c<<"\n";
			}
		}
	}
	cout<<c<<"\n";
}
