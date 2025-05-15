#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x;
    cin>>n>>x;
    float s=0;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    s=abs(s);
    //cout<<"s: "<<s<<"\n";
    
    cout<<abs(ceil(s/x))<<"\n";
    
    
}








 
