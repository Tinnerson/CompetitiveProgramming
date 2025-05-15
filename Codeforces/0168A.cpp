#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, y;
    cin>>n>>x>>y;
    float t=ceil(0.01*y*n);
    //cout<<"t: "<<t<<"\n";
    
    if((t-x)<=0){
        cout<<0<<"\n";
    }
    else{
        cout<<abs(t-x)<<"\n";
    }
}
