#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a[7], j;
	cin>>n;

	for(int i=0; i<7; i++){
		cin>>a[i];
	}

	for(j=0; j<7; j++){
		n-=a[j];
		if(n<=0){
			cout<<j+1<<"\n";
			break;
		}
		if(j==6){
			j=-1;
		}
	}
}
