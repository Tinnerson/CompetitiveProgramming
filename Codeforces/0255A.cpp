#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, x=0, y=0, z=0;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a;
		if(i%3 == 0){
			x+=a;
		}
		else if(i%3 == 1){
			y+=a;
		}
		else{
			z+=a;
		}
	}
	
	if(x>y && x>z){
		cout<<"chest"<<"\n";
	}
	if(y>x && y>z){
		cout<<"biceps"<<"\n";
	}
	if(z>x && z>y){
		cout<<"back"<<"\n";
	}
}
