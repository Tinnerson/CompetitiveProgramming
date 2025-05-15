#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x1, y1, x2, y2, d;
	cin>>x1>>y1>>x2>>y2;
	if(x2-x1==0 || y2-y1==0 || abs(y2-y1)==abs(x2-x1)){
		if(x2-x1==0){
			d=abs(y2-y1);
			cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2<<"\n";
		}
		else if(y2-y1==0){
			d=abs(x2-x1);
			cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d<<"\n";
		}
		else if(abs(y2-y1)==abs(x2-x1)){
			cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
		}
	}
	else{
		cout<<-1<<"\n";
	}
}
