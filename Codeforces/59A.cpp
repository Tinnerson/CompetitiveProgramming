#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s, z;
	cin>>s;

	z = s;

	int u=0, l=0;

	for(int i = 0; i<s.size(); i++){
		if(isupper(s[i])){
			u++;
		}
		if(islower(s[i])){
			l++;
		}
	}
	
	if(u>l){
		for(int j = 0; j<s.size(); j++){
			z[j] = toupper(s[j]);
		}
		cout<<z<<"\n";	
	}
	else{
		for(int j = 0; j<s.size(); j++){
			z[j] = tolower(s[j]);
		}
		cout<<z<<"\n";
	}
}
