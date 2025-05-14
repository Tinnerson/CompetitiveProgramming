#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;

	sort(s.begin(), s.end());

	//cout<<s<<"\n";

	s.erase(0, s.size()/2);

	//cout<<s<<"\n";
	
	for(int j=1; j<s.size(); j+=2){
		s.insert(j, "+");
	}

	cout<<s<<"\n";
}
