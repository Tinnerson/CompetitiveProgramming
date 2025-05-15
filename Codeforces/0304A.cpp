#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	int c=0;
	double t;
	for(int i=1; i<n; i++){
		for(int j=i; (i*i)+(j*j)<=(n*n); j++){
			t=i*i+j*j;

			if(int(sqrt(t))*int(sqrt(t))==t){
				c++;
			}
		}
	}
	cout<<c<<"\n";
}
