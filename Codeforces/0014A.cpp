#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin>>n>>m;
    char a[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    int r1=51, r2=-1, c1=51, c2=-1;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='*'){
                if(i<r1){
                    r1=i;
                }
                if(i>r2){
                    r2=i;
                }
                if(j<c1){
                    c1=j;
                }
                if(j>c2){
                    c2=j;
                }
            }
        }
    }
    
    
    for(int i=r1; i<=r2; i++){
        for(int j=c1; j<=c2; j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
    
    
}
