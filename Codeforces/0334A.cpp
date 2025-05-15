#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    for(int i=1; i<=n*n/2; i+=2){
        cout<<i<<" "<<n*n-i+1<<" ";
    }
    
    cout<<"\n";
    for(int j=2; j<=n*n/2; j+=2){
        cout<<j<<" "<<n*n-j+1<<" ";
    }
    
}
 
