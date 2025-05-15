#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        //cout<<"start"<<"\n";
        int n;
        cin>>n;
        char a[n][n];
        int x1, y1, x2, y2;
        bool isFirst=true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
                if(a[i][j]=='*' && isFirst){
                    x1=i;
                    y1=j;
                    isFirst=false;
                }
                else if(a[i][j]=='*' && !isFirst){
                    x2=i;
                    y2=j;
                }
            }
        }
        
        //cout<<"x1 x2 y1 y: "<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<"\n";
        
        if(x1==x2){
            if(x1 != 0){
                //cout<<"a\n";
                a[x1-1][y1]='*';
                a[x2-1][y2]='*';
            }
            else if(x1==0){
                //cout<<"b\n";
                a[x1+1][y1]='*';
                a[x2+1][y2]='*';
            }
        }
        else if(y1==y2){
            if(y1 != 0){
                //cout<<"c\n";
                a[x1][y1-1]='*';
                a[x2][y2-1]='*';
            }
            else{
                //cout<<"d\n";
                a[x1][y1+1]='*';
                a[x2][y2+1]='*';
            }
        }
        else if(x1 != x2 && y1 != y2){
            //cout<<"e\n";
            a[x1][y2]='*';
            a[x2][y1]='*';
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        //cout<<"end"<<"\n";
        
    }
}




 
