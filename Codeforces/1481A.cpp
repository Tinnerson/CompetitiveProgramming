#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int x, y;
        cin>>x>>y;
        string s;
        cin>>s;
        int u=0, d=0, l=0, r=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='U'){
                u++;
            }
            else if(s[i]=='D'){
                d++;
            }
            else if(s[i]=='L'){
                l++;
            }
            else if(s[i]=='R'){
                r++;
            }
        }
        
        //cout<<"u, d, l, r: "<<u<<" "<<d<<" "<<l<<" "<<r<<"\n";
        
        if(x<=0 && y<=0){
            if(d>=abs(y) && l>=abs(x)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(x<=0 && y>=0){
            if(u>=abs(y) && l>=abs(x)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(x>=0 && y<=0){
            if(d>=abs(y) && r>=abs(x)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else if(x>=0 && y>=0){
            if(u>=abs(y) && r>=abs(x)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}

 
