#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int n, k; cin>>n>>k;
        int a[n];
        int b[n];
        
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    int temp1=b[i];
                    b[i]=b[j];
                    b[j]=temp1;
                }
            }
        }
        
        for(int i=0; i<n; i++){
            if(k>=a[i]){
                k+=b[i];
            }
            else{
                break;
            }
        }
        
        cout<<k<<"\n";
        
    }
}
