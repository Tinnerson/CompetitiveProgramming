#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin>>a>>b>>c;
    
    int v[6] = {a+b+c, a*b*c, a*b+c, a+b*c, (a+b)*c, a*(b+c)};
    
    sort(v, v+6);
    
    cout<<v[5]<<"\n";
    
    
}

 
