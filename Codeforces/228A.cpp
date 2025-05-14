#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[4];
	for(int i=0; i<4; i++){
		cin>>arr[i];
	}

	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr + n);

	int c = 0;

	for(int i=1; i<4; i++){
		if(arr[i] == arr[i-1]){
			c++;
		}
	}

	cout<<c<<"\n";
}

