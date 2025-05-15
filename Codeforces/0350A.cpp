#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    
    sort(a, a+n);
    sort(b, b+m);
    
    if(a[n-1]>=b[0] || 2*a[0]>=b[0]){
        cout<<-1<<"\n";
        return 0;
    }
    if(2*a[0]>=a[n-1]){
        cout<<2*a[0]<<"\n";
    }
    else{
        cout<<a[n-1]<<"\n";
    }
    

}

 
