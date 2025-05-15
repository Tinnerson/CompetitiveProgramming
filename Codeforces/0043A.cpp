#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, c=0, max=-1, maxp;
	cin>>n;
	string a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	if(n==1){
		cout<<a[0]<<"\n";
		return 0;
	}

	sort(a, a+n);
//	cout<<"sorted thing is: "<<"\n";
	//for(int i=0; i<n; i++){
	//	cout<<a[i]<<" ";
//	}
	//cout<<"\n";

	for(int j=0; j<n-1; j++){
		//cout<<"testing j: "<<j<<"\n";
		if(a[j]==a[j+1]){
			//cout<<"passed on "<<j<<" "<<j+1<<"\n";
			c++;
			//cout<<"c rn is: "<<c<<"\n";
		}
		else if(a[j] != a[j+1]){
			c=0;
		}
		if(c>max){
			max=c;
			maxp=j;
		}

	}

	cout<<a[maxp]<<"\n";

}
