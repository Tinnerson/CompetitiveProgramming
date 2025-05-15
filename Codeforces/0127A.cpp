#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    double d=0.0;
    cin>>n>>k;
    double x[n], y[n];
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    
    for(int j=1; j<n; j++){
        d+=sqrt(pow(x[j]-x[j-1], 2) + pow(y[j]-y[j-1], 2));
    }
    
    cout<<fixed<<setprecision(10)<<d*k/50.0<<"\n";
}

 
