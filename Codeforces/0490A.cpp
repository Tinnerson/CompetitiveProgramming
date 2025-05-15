#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int a[n];
    int c1c=0, c2c=0, c3c=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            c1c++;
        }
        else if(a[i]==2){
            c2c++;
        }
        else if(a[i]==3){
            c3c++;
        }
    }
    int tt=min(c1c, c2c);
    int t=min(tt, c3c);
    cout<<t<<"\n";
    
    bool is1=true, is2=true, is3=true;
    
    while(t--){
        for(int i=0; i<n; i++){
            if(a[i]==1){
                if(is1){
                    cout<<i+1<<" ";
                    a[i]=-1;
                    is1=false;
                }
            }
            else if(a[i]==2){
                if(is2){
                    cout<<i+1<<" ";
                    a[i]=-1;
                    is2=false;
                }
            }
            else if(a[i]==3){
                if(is3){
                    cout<<i+1<<" ";
                    a[i]=-1;
                    is3=false;
                }
            }
        }
        is1=true, is2=true, is3=true;
        cout<<"\n";
    }

}

 
