#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin>>n>>m;
	char a[n][m];

	int p=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			//cout<<"testing i j "<<i<<" "<<j<<"\n";
			if(i%2==0){
				a[i][j]='#';
				//cout<<"sharp by if"<<"\n";
			}
			else{
				if(p==0){
					//cout<<"p0 stage"<<"\n";
					if(j<m-1){
						a[i][j]='.';
						//cout<<"dot by elifif"<<"\n";
					}
					else if(j==m-1){
						a[i][j]='#';
						p=1;
						//cout<<"sharp by elifel"<<"\n";
					}
				}
				else if(p==1){
					//cout<<"p1 stage"<<"\n";
					if(j==0){
						a[i][j]='#';
						//cout<<"starp by elelif"<<"\n";
					}
					else if(j>0 && j<m-1){
						a[i][j]='.';
						//cout<<"dot by elelel"<<"\n";
					}
					else if(j==m-1){
						a[i][j]='.';
						p=0;
					}
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}

}
