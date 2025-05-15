#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[n];
    string b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    string t, tt;
    int c=0;
    for(int i=0; i<n; i++){
        t=b[i];
        tt=t.substr(0, s.size());
        //cout<<"tt: "<<tt<<"\n";
        if(tt != s){
            //cout<<"ttbruh: "<<tt<<"\n";
            b[i] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
            c++;
        }
        if(c==n){
            cout<<s<<"\n";
            return 0;
        }
    }
    
    sort(b, b+n);
    //for(int i=0; i<n; i++){
    //    cout<<b[i]<<"\n";
    //}
    //cout<<"a\n";
    cout<<b[0]<<"\n";
    
}
