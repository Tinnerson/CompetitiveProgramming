#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string n, t1, t2;
	cin>>n;
	int t, tt;
	string n1[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	string n2[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	string n3[10]={"","-one","-two","-three","-four","-five","-six","-seven","-eight","-nine"};
	string n4[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

	if(n.size()==1){
		t=stoi(n);
		cout<<n1[t]<<"\n";
	}
	else if(n.size()==2){
		t1=n[0];
		t2=n[1];
		t=stoi(t1);
		tt=stoi(t2);
		if(t==1){
			cout<<n4[tt]<<"\n";
		}
		else{
			cout<<n2[t-2]<<n3[tt]<<"\n";
		}
	}
}
