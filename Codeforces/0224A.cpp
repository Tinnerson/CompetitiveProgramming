#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c;
	cin>>a>>b>>c;
	int x, y, z;
	x=sqrt((a*b)/c);
	y=sqrt((a*c)/b);
	z=sqrt((b*c)/a);

	cout<<(x+y+z)*4<<"\n";
}
