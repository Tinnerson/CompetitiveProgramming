#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int a[n][n];
    int ac[n][n];
    int ar[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    
    int t=0;
    
    for(int i=0; i<n; i++){
        t=0;
        for(int j=0; j<n; j++){
            t+=a[i][j];
        }
        for(int l=0; l<n; l++){
            ar[i][l]=t;
        }
    }
    
    for(int i=0; i<n; i++){
        t=0;
        for(int j=0; j<n; j++){
            t+=a[j][i];
        }
        for(int l=0; l<n; l++){
            ac[l][i]=t;
        }
    }
    
    int c=0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ac[i][j]>ar[i][j]){
                c++;
            }
        }
    }
    
    cout<<c<<"\n";
    
    
    
    
    
}
 
