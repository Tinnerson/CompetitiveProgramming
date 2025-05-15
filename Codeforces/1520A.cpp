#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve();

int main(){
    int t;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}

void solve(){
    ll n;cin>>n;
    string s;cin>> s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            s[i]='0';
        }
    }
    int c=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!='0'){
            for(int j=0;j<n;j++){
                if(i!=j){
                   if(s[i]==s[j]){
                    c++;
                    } 
                }
                
            }
        } 
    }
    if(c!=0){
        cout<< "NO"<<endl;
    }
    else{
        cout<< "YES"<<endl;
    }

    
}
