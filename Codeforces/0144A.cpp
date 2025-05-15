#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, max, min, maxp, minp;
	cin>>n;
	int a[n];
		
	for(int l=0; l<n; l++){
		cin>>a[l];
	}
	
	/*
	if(n==2){
		if(a[0]>=a[1]){
			cout<<0<<"\n";
			return 0;
		}
		else if(a[1]>=a[0]){
			cout<<1<<"\n";
			return 0;
		}
	}
*/
	min = 101; 
    for(int i = 0; i < n; i++){
        if(a[i] <= min){
            min = a[i];
			minp = i;
        }
    }

	//cout<<min<<" "<<minp<<"\n";

	max = 0; 
    for(int i = n-1; i >= 0; i--){
        if(a[i] >= max){
            max = a[i];
			maxp = i;
        }
    }
	
	//cout<<max<<" "<<maxp<<"\n";

	

	//cout<<maxp<<" "<<minp<<"\n";

	if(maxp>minp){
		cout<<maxp-1+n-1-minp<<"\n";
	}
	else if(minp>maxp){
		cout<<maxp+n-minp-1<<"\n";
	}
	else{
		cout<<0<<"\n";
	}



	
}
