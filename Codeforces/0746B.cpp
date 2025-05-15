#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    //cout<<"n: "<<n<<"\n";
    string s;
    cin>>s;
    //cout<<"s: "<<s<<"\n";
    for(int i=n-2; i>=0; i-=2){
        cout<<s[i];
    }
    int t;
    if(n%2==0){
        t=1;
    }
    else if(n%2==1){
        t=0;
    }
    for(int i=t; i<=n; i+=2){
        cout<<s[i];
    }
    cout<<"\n";
}







































 
