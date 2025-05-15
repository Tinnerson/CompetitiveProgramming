#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll a;
	cin>>a;
	string s;
	int c=0;
	bool isEight=true;

	while(isEight){
		//cout<<"loop"<<"\n";
		s=to_string(a);
		for(int i=0; i<s.size(); i++){
			if(s[i]=='8'){
				if(c==0){
					continue;
				}
				else{
					isEight=false;
				}
			}
		}
		a++;
		c++;
	}
	cout<<c-1<<"\n";
}
