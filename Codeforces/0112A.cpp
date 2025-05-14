#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string a, b;
	cin>>a>>b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);

	string albet = "abcdefghijklmnopqrstuvwxyz";
	int x, y;

	if(a != b){
		for(int i=0; i<a.size(); i++){
			//cout<<"i rn is "<<i<<"\n";
			if(a[i] != b[i]){
				for(int j=0; j<26; j++){
					//cout<<"j rn is "<<j<<"\n";
					if(a[i] == albet[j]){
						x = j;
						//cout<<"x rn is "<<x<<"\n";
					}
					if(b[i] == albet[j]){
						y = j;
						//cout<<"y rn is "<<y<<"\n";
					}
					/*
					
					if(x>y){
						cout<<1<<"\n";
						return 0;
					}
					if(y>x){
						cout<<-1<<"\n";
						return 0;
					}
					*/	
				}
				break;
			}
		}
		if(x>y){
			cout<<1<<"\n";
		}
		else if(y>x){
			cout<<-1<<"\n";
		}
	}


	else{
		cout<<0<<"\n";
	}

	/*
	if(x>y){
		cout<<1<<"\n";
	}
	else if(y>x){
		cout<<-1<<"\n";
	}
	else{
		cout<<0<<"\n";
	}
	*/

}
