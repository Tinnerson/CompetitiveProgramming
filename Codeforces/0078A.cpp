#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);

	int x=0, y=0, z=0;

	string v = "aiueo";

	for(int i=0; i<a.size(); i++){
		for(int j=0; j<v.size(); j++){
			if(a[i] == v[j]){
				x++;
			}
		}
	}
	for(int l=0; l<b.size(); l++){
		for(int o=0; o<v.size(); o++){
			if(b[l] == v[o]){
				y++;
			}
		}
	}
	for(int p=0; p<c.size(); p++){
		for(int k=0; k<v.size(); k++){
			if(c[p] == v[k]){
				z++;
			}
		}
	}
	
	if(x==5 && y==7 && z==5){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}

}
