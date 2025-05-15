#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin>>n>>m;
	if(n>=m){
		if(m%2==0){
			cout<<"Malvika"<<"\n";
		}
		else{
			cout<<"Akshat"<<"\n";
		}
	}
	else if(m>=n){
		if(n%2==0){
			cout<<"Malvika"<<"\n";
		}
		else{
			cout<<"Akshat"<<"\n";
		}
	}
}
