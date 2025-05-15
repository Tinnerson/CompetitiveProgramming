#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;
	bool isTrue=true;
	for(int i=0; i<s.size()-1; i--){
		if(s[i]=='0' && s[i+1]=='1'){
			s.erase(i, 1);
			isTrue=false;
			break;
		}
	}
	bool hasZ=true;
	if(isTrue){
		for(int i=0; i<s.size(); i++){
			if(s[i]=='0'){
				s.erase(i, 1);
				hasZ=false;
				break;
			}
		}
		if(hasZ){
			s.erase(0, 1);
		}
	}
	cout<<s<<"\n";

} 
