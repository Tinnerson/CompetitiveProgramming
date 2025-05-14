#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;

	int u = 0;

	sort(s.begin(), s.end());

	for(int i=1; i<s.size(); i++){
		if(s[i] != s[i-1]){
			u++;
		}
	}
	
	if(u%2==0){
		cout<<"IGNORE HIM!"<<"\n";
	}
	else if(u%2==1){
		cout<<"CHAT WITH HER!"<<"\n";
	}

}

