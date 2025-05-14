#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;
	bool f = true;

	for(ll i=0; i<s.size();){
		if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
			i+=3;
		}
		else if(s[i]=='1' && s[i+1]=='4'){
			i+=2;
		}
		else if(s[i]=='1'){
			i++;
		}
		else{
			f=false;
			break;
		}
	}

	if(f){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}

}
