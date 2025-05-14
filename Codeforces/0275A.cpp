#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l[3][3] = {
				{1, 1, 1}, 
				{1, 1, 1}, 
				{1, 1, 1}
	};


	int a[3][3], t;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>a[i][j];
			if(a[i][j]>0){
				for(int p=0; p<a[i][j]; p++){
					if(l[i][j]==0){
						l[i][j]=1;
					}
					else if(l[i][j]==1){
						l[i][j]=0;
					}
					if(i>=1){			
						if(l[i-1][j] == 0){
								l[i-1][j]=1;
						}
						else if(l[i-1][j] == 1){
							l[i-1][j]=0;
						}
					}
					if(j<=1){
						if(l[i][j+1] == 0){
							l[i][j+1]=1;
						}
						else if(l[i][j+1] == 1){
							l[i][j+1]=0;
							
						}
					}
					if(i<=1){
						if(l[i+1][j] == 0){
							l[i+1][j]=1;
						}
						else if(l[i+1][j] == 1){
							l[i+1][j]=0;
							
						}
					}
					if(j>=1){
						if(l[i][j-1] == 0){
							l[i][j-1]=1;
						}
						else if(l[i][j-1] == 1){
							l[i][j-1]=0;
						}
					}					
				}
			}
		}
	}

	

	
	for(int x=0; x<3; x++){
		for(int y=0; y<3; y++){
			cout<<l[x][y];
		}
		cout<<"\n";
	}
}
