#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int w=0, b=0;
	
	char a[8][8];
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin>>a[i][j];
			if(a[i][j]=='.'){
				continue;
			}
			else if(a[i][j]=='Q'){
				w+=9;
			}
			else if(a[i][j]=='R'){
				w+=5;
			}
			else if(a[i][j]=='B'){
				w+=3;
			}
			else if(a[i][j]=='N'){
				w+=3;
			}
			else if(a[i][j]=='P'){
				w+=1;
			}
			else if(a[i][j]=='q'){
				b+=9;
			}
			else if(a[i][j]=='r'){
				b+=5;
			}
			else if(a[i][j]=='b'){
				b+=3;
			}
			else if(a[i][j]=='n'){
				b+=3;
			}
			else if(a[i][j]=='p'){
				b+=1;
			}

		}
	}
	if(w>b){
		cout<<"White"<<"\n";
	}
	else if(b>w){
		cout<<"Black"<<"\n";
	}
	else{
		cout<<"Draw"<<"\n";
	}
}
