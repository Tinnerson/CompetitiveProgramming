#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int n, o=0, e=0;
        cin>>n;
        int a;
        for(int i=0; i<2*n; i++){
            cin>>a;
            if(a%2==0){
                e++;
            }
            else if(a%2==1){
                o++;
            }
        }
        
        if(e==o){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}




 
