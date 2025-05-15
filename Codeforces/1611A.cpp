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
		string s;
		cin>>s;
		int a[s.size()];
		string ss;
		int as;
		int o=0;
		bool isCont=true;
		int f;
		for(int i=0; i<s.size(); i++){
			ss=s[i];
			as=stoi(ss);
			a[i]=as;
			if(a[i]%2==1){
				o++;
			}
			if(a[i]%2==0 && isCont){
				f=i;
				isCont=false;
			}
		}
		if(o==s.size()){
			cout<<-1<<"\n";
			continue;
		}

		if(a[s.size()-1]%2==0){
			cout<<0<<"\n";
			continue;
		}

		if(f==0){
			cout<<1<<"\n";
		}
		else{
			cout<<2<<"\n";
		}
		
	}
}
