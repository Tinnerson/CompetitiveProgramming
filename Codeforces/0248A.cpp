#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b, ax=0, ay=0, bx=0, by=0, c=0;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a>>b;
		if(a==0){
			ax++;
		}
		else if(a==1){
			ay++;
		}
		if(b==0){
			bx++;
		}
		else if(b==1){
			by++;
		}
	}

	if(ax<=ay){
		c+=ax;
	}
	else if(ay<=ax){
		c+=ay;
	}
	if(bx<=by){
		c+=bx;
	}
	else if(by<=bx){
		c+=by;
	}

	cout<<c<<"\n";
}
