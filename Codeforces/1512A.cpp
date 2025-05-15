#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i]; 
            b[i]=a[i];
        }
        sort(b, b+n);
        int t;
        if(b[0] != b[1]){
            t=b[0];
        }
        else{
            t=b[n-1];
        }
        
        //cout<<"t: "<<t<<"\n";
        
        for(int i=0; i<n; i++){
            if(a[i]==t){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
}


 
