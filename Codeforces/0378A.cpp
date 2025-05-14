#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, x=0, y=0, z=0;
	cin>>a>>b;

	for(int i=1; i<=6; i++){
		if(abs(a-i)<abs(b-i)){
			x++;
		}
		if(abs(a-i)==abs(b-i)){
			y++;
		}
		else if(abs(a-i)>abs(b-i)){
			z++;
		}
	}

	cout<<x<<" "<<y<<" "<<z<<"\n";

}
