#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int a[4];
        for(int i=0; i<4; i++) cin>>a[i];
        int s[2];
        if(a[0]>a[1]){
            s[0]=a[0];
        }
        else{
            s[0]=a[1];
        }
        if(a[2]>a[3]){
            s[1]=a[2];
        }
        else{
            s[1]=a[3];
        }
        
        sort(a, a+4);
        sort(s, s+2);
        
        //for(int i=0; i<4; i++) cout<<"a: "<<a[i]<<"\n";
        //for(int i=0; i<2; i++) cout<<"s: "<<s[i]<<"\n";
        
        if(s[0]==a[2] && s[1]==a[3]) cout<<"YES\n";
        else cout<<"NO\n";
    }
}






 
