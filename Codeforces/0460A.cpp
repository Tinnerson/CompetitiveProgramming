#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, c=0;
	cin>>n>>m;

	for(int i=0;;i++){
		if(n<1){
			break;
		}
		n--;
		if(i%m==0){
			n++;
		}
		c++;
	}

	cout<<c-1<<"\n";
}
