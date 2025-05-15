#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin>>a>>b;
    int x;
    if(a>=b){
        x=a;
    }
    if(b>=a){
        x=b;
    }
    int y=6-x+1;
    float yf=y*1.0;
    float d=6.0;
    if(y%2==0){
        yf/=2;
        d/=2;
    }
    if(y%3==0){
        yf/=3;
        d/=3;
    }
    
    cout<<yf<<"/"<<d<<"\n";
}

















 
