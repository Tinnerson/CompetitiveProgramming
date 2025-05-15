#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, ma;
    cin>>n>>m;
    ma=m;
    
    for(int i=1; i<=m; i++){
        //cout<<"testing i: "<<i<<"\n";
        if(i>n){
            i=0;
            //cout<<"reset"<<"\n";
        }
        if(ma-i<0){
            //cout<<"break"<<"\n";
            break;
        }
        //cout<<"end test i"<<"\n";
        ma-=i;
    }
    
    cout<<ma<<"\n";
}

 
