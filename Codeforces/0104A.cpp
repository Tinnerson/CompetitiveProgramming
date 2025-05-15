#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    n-=10;
    
    
    if(n<=0 || n>11){
        cout<<0<<"\n";
    }
    else if(n==10){
        cout<<15<<"\n";
    }
    else{
        cout<<4<<"\n";
    }
}

 
