#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin>>n>>m;
	char a;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a;
			if(a == 'W' || a == 'B' || a=='G'){
				continue;
			}
			else{
				cout<<"#Color"<<"\n";
				return 0;
			}
		}
	}
	cout<<"#Black&White"<<"\n";
}
