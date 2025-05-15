#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin>>n>>m;
    
    int c=0;
    
    for(int i=0; i<=sqrt(n); i++){
        for(int j=0; j<=sqrt(m); j++){
            if(i*i+j==n && i+j*j==m){
                c++;
            }
        }
    }
    cout<<c<<"\n";
}


 
