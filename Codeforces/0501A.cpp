#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    float a, b, c, d, x, y;
    cin>>a>>b>>c>>d;
    
    x=max(3*a/10, a-a/250*c);
    y=max(3*b/10, b-b/250*d);
    
    if(x>y){
        cout<<"Misha"<<"\n";
    }
    else if(y>x){
        cout<<"Vasya"<<"\n";
    }
    else{
        cout<<"Tie"<<"\n";
    }
}
