#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;

	for(int i=2; i<=s.size(); i++){
		if(s[i-2] == 'W' && s[i-1] == 'U' && s[i] == 'B'){
			s.replace(i-2, 3, " ");
		}
	}
	
	for(int j=1; j<=s.size(); j++){
		if(s[j-1] == ' ' && s[j-1]==s[j]){
			s.erase(j-1, 1);
		}
	}
	if(s[0] == ' '){
		s.erase(0, 1);
	}
	

	cout<<s<<"\n";
	
}
