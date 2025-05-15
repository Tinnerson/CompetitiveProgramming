#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, s=0;
    cin>>n>>m;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    
    int t;
    
    for(int i=0; i<n; i++){
        if(a[i]<0 && m>0){
            t=a[i];
            s+=abs(t);
            m--;
        }
    }
    
    cout<<s<<"\n";
}



 
