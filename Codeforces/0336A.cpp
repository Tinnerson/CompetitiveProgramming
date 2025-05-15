#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x, y, ca, can;
    cin>>x>>y;
    
    ca=abs(x)+abs(y);
    can=0-abs(x)-abs(y);
    
    if(x>0 && y>0){
        cout<<0<<" "<<ca<<" "<<ca<<" "<<0<<"\n";
    }
    else if(x<0 && y>0){
        cout<<can<<" "<<0<<" "<<0<<" "<<ca<<"\n";
    }
    else if(x<0 && y<0){
        cout<<can<<" "<<0<<" "<<0<<" "<<can<<"\n";
    }
    else if(x>0 && y<0){
        cout<<0<<" "<<can<<" "<<ca<<" "<<0<<"\n";
    }
}

 
