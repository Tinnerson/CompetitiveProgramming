#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    int x=a[0];
    for(int i=0; i<n; i++){
        if(a[i] != x){
            cout<<a[i]<<"\n";
            return 0;
        }
    }
    
    cout<<"NO\n";
    
    
}
 
