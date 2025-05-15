#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char a[8][8];
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin>>a[i][j];
		}
	}
	
	int c=0;

	for(int l=0; l<8; l++){
		for(int w=1; w<8; w++){
			if(a[l][w] != a[l][w-1]){
				c++;
			}
		}
	}

	if(c==56){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}



}
