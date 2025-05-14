#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, d;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    
    sort(a, a+m);
    
    d = a[n-1]-a[0];
    
    for(int j=n-1; j<m; j++){
        if(a[j]-a[j-n+1]<=d){
            d=a[j]-a[j-n+1];
        }
    }
    
    cout<<d<<"\n";
    
}
