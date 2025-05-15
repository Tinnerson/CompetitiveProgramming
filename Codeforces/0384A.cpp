#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	float n;
	cin>>n;

	cout<<ceil(n*n/2)<<"\n";

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i%2==0){
				if(j%2==0){
					cout<<'C';
				}
				else{
					cout<<'.';
				}
			}
			else{
				if(j%2==1){
					cout<<'C';
				}
				else{
					cout<<'.';
				}
			}
		}
		cout<<"\n";
	}

}
