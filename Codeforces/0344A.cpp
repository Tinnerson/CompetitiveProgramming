#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, c=1;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    
    for(int i=0; i<n-1; i++){
        if(a[i] != a[i+1]){
            c++;
        }
    }
    cout<<c<<"\n";
}

 
