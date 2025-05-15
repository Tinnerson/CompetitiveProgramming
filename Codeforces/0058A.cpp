#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string word, hello="hello";
    cin>>word;
    int j=0, pas=0;
    for(int i=0; i<word.length();i++){
        if(word[i]==hello[j]){
            j++;
            pas++;
        }
    }
    if(pas==5){
        cout<<"YES";
    }
	else{
        cout<<"NO";
    }
}
