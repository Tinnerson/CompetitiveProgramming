#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int h[n];
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
   sort(h, h+n);
   cout<<h[n-1]<<"\n";
    
}



 
