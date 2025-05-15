#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, f, t, m=-1000000000, b;
    cin>>n>>k;
    
    for(int i=0; i<n; i++){
        cin>>f>>t;
        if(t>k){
            b=f-t+k;
            if(b>m){
                m=b;
                //cout<<"buh"<<"\n";
            }
        }
        else{
            if(f>m){
                m=f;
                //cout<<"bruh"<<"\n";
            }
        }
    }
    
    if(m==-1000000000){
        cout<<-1<<"\n";
    }
    else{
        cout<<m<<"\n";
    }
}

 
