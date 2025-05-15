#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, d, c=0;
    cin>>n>>d;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        d-=a[i];
    }
    
    //cout<<"bruh: "<<d-(n*10)<<"\n";
    
    if(d-(n*10)+10>=0){
        cout<<floor(d/5)<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    
    
}


 
