#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, p, q, h=0, ass, sas;
	cin>>n;
	
	cin>>p;
	if(p==0){
		ass=0;
		p++;
	}
	int a[p];
	if(p>0){
		
		for(int i=0; i<p; i++){
			cin>>a[i];
			//cout<<"a of i is "<<a[i]<<"\n";
		}
	}
	else{
		a[p] = {0};
		
	}
	

	cin>>q;
	if(q==0){
		sas=0;
		q++;
	}
	int b[q];
	if(q>0){
		for(int j=0; j<q; j++){
			cin>>b[j];
			//cout<<"b of j is "<<b[j]<<"\n";
		}
	}
	else{
		b[q] = {0};
		
	}

	if(ass==0 && sas==0){
	    cout<<"Oh, my keyboard!"<<"\n";
	    return 0;
	}
	
	int c[p+q];

	if(p>0){
		for(int l=0; l<p; l++){
			c[l] = a[l];
			//cout<<"c of l is "<<c[l]<<"\n";
		}
	}
	//cout<<"end of loop 1"<<"\n";
	
	if(q>0){
		for(int l=p; l<p+q; l++){
			//cout<<"l rn is "<<l<<"\n";
			c[l] = b[l-p];
			//cout<<"c of l is "<<c[l]<<"\n";
		}
	}
		

	sort(c, c+p+q);

	for(int x=1; x<p+q; x++){
		if(c[x-1]==c[x]-1){
			h++;
		}
	}
	
	//cout<<"h rn is "<<h<<"\n";

	if(h==n-1){
		cout<<"I become the guy."<<"\n";
	}
	else{
		cout<<"Oh, my keyboard!"<<"\n";
	}

}
 
