#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, a=0, b, w=10005;
	cin>>n>>m;

	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			b=i+j;
			if(i+2*j==n && b%m==0){
				//cout<<b<<"\n";
				if(b<=w){
					w-=w;
					w+=b;
				}
			}
		}
	}
	
	if(w==10005){
		cout<<-1<<"\n";
	}
	else{
		cout<<w<<"\n";
	}
}
