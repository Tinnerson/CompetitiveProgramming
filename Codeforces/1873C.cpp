#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        char a[10][10];
        int c=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>a[i][j];
            }
        }
        int x, y;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(a[i][j]=='X'){
                    //cout<<"i, j: "<<i<<" "<<j<<"\n";
                    x=i;
                    y=j;
                    if(x>4){
                        x=9-x;
                    }
                    if(j>4){
                        y=9-y;
                    }
                    c+=min(x+1, y+1);
                }
            }
        }
        
        cout<<c<<"\n";
    }
}
 
