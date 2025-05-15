#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char a[4][4];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin>>a[i][j];
			//cout<<a[i][j]<<"\n";
		}
	}

	for(int l=0; l<3; l++){
		for(int x=0; x<3; x++){
			//cout<<"testing: "<<l<<" "<<x<<" "<<a[l][x]<<"\n";
			if(a[l][x]==a[l][x+1] && a[l][x]==a[l+1][x]){
				cout<<"YES"<<"\n";
				return 0;
			}
			else if(a[l][x]==a[l][x+1] && a[l][x]==a[l+1][x+1]){
				cout<<"YES"<<"\n";
				return 0;
			}
			else if(a[l][x]==a[l+1][x] && a[l][x]==a[l+1][x+1]){
				cout<<"YES"<<"\n";
				return 0;
			}
			else if(a[l][x+1]==a[l+1][x+1] && a[l][x+1]==a[l+1][x]){
				cout<<"YES"<<"\n";
				return 0;
			}
		}
	}
	cout<<"NO"<<"\n";
}
