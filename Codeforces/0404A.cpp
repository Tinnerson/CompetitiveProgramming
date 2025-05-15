#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, dr=0, ur=0, d=0;
	cin>>n;

	char c;
	
	char a[n][n];

	string s;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}

	for(int v=0; v<n; v++){
		for(int b=0; b<n; b++){
			s+=a[v][b];
		}
	}

	sort(s.begin(), s.end());
	//cout<<s<<"\n";

	s.erase(unique(s.begin(), s.end()), s.end());

	if(s.size()>2){
		cout<<"NO"<<"\n";
		return 0;
	}
	
	//cout<<s<<"\n";

	if(a[0][0]==a[1][1]){
		c=a[0][0];
	}
	

	for(int l=1; l<n; l++){
		if(a[l-1][l-1]==a[l][l]){
			dr++;
		}
	}

	for(int x=n-1; x>=0; x--){
		for(int y=1; y<=n-1; y++){
			//cout<<"testing: "<<x<<" "<<y<<"\n";
			if(x+y==n){
				//cout<<"accepted: "<<x<<" "<<y<<"\n";
				if(a[x-1][y-1]==a[x][y]){
					//cout<<"ultra accepted: "<<x<<" "<<y<<"\n";
					ur++;
				}
			}
		}
	}

	//cout<<ur<<"\n";

	for(int o=0; o<n; o++){
		for(int p=0; p<n; p++){
			//cout<<"testing: "<<o<<" "<<p<<"\n";
			if(a[o][p] != c){
				//cout<<"found: "<<o<<" "<<p<<"\n";
				d++;
			}
		}
	}
	
	//cout<<"dr is "<<dr<<" | ur is "<<ur<<" | d is "<<d<<"\n";
	
	if(dr+1==n && ur+1==n && d==n*n-2*n+1){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}


	
}
