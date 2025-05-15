#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t;
    cin>>n;
    
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin>>t;
        a[t]=i;
    }
    
    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    
}
 
