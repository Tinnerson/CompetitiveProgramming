#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, s;
	cin>>n;
	s=n;
	
	int i;
	for(i=1; i<=n; i++){
		s-=i*(i+1)/2;
		if(s<0){
			break;
		}
	}
	
	cout<<i-1<<"\n";
}
