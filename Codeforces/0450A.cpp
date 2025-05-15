#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin>>n>>m;
    int a[n];
    int l;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool isPos=true;
    while(isPos){
        int t=0;
        for(int i=0; i<n; i++){
            if(a[i]>0){
                a[i]-=m;
                if(a[i]<=0){
                    l=i;
                }
                //cout<<"i, a[i]: "<<i<<" "<<a[i]<<"\n";
            }
            else{
                t++;
            }
        }
        if(t==n){
            isPos=false;
        }
    }
    
    cout<<l+1<<"\n";
}
 
