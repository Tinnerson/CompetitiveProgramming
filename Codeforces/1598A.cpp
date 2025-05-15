#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        bool isTrue=true;
        for(int i=0; i<n; i++){
            if(a[i]=='1' && a[i]==b[i]){
                isTrue=false;
                break;
            }
        }
        if(isTrue){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
        
    }
}
