#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        long long x, y;
        cin>>x>>y;
        long long n=x-y;
        if(n>1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

 
