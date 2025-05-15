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
        string s, ts;
        cin>>s;
        int a[n], ti, b=0, c=0;
        for(int i=0; i<n; i++){
            ts=s[i];
            ti=stoi(ts);
            a[i]=ti;
            b+=a[i];
            if(i != n-1 && a[i]>0){
                c++;
            }
        }
        cout<<b+c<<"\n";
    }
}

 
