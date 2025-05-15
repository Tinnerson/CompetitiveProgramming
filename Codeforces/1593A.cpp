#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		ll a[3];
		ll max=-1;
		for(int i=0; i<3; i++){
			cin>>a[i];
			if(a[i]>max){
				max=a[i];
			}
		}
		int c=0;
		bool doIt=false;
		for(int i=0; i<3; i++){
			if(a[i]==max){
				c++;
			}
		}
		if(c>1){
			doIt=true;
		}
		//cout<<"doIt: "<<doIt<<"\n";


		//cout<<"max: "<<max<<"\n";
		if(doIt){
			if(a[0] != max){
				cout<<max-a[0]+1<<" ";
			}
			else{
				cout<<1<<" ";
			}
			if(a[1] != max){
				cout<<max-a[1]+1<<" ";
			}
			else{
				cout<<1<<" ";
			}
			if(a[2] != max){
				cout<<max-a[2]+1<<"\n";
			}
			else{
				cout<<1<<"\n";
			}
		}
		else if(!doIt){
			if(a[0] != max){
				cout<<max-a[0]+1<<" ";
			}
			else{
				cout<<0<<" ";
			}
			if(a[1] != max){
				cout<<max-a[1]+1<<" ";
			}
			else{
				cout<<0<<" ";
			}
			if(a[2] != max){
				cout<<max-a[2]+1<<"\n";
			}
			else{
				cout<<0<<"\n";
			}
		}
	}
}
 
