#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x=0, y=n-1;
    int p1=0, p2=0;
    int s=0;
    while(x != y){
        if(a[x]>=a[y]){
            if(s==0){
                p1+=a[x];
                s=1;
            }
            else if(s==1){
                p2+=a[x];
                s=0;
            }
            x++;
            
        }
        else if(a[y]>=a[x]){
            if(s==0){
                p1+=a[y];
                s=1;
            }
            else if(s==1){
                p2+=a[y];
                s=0;
            }
            y--;
        }
    }
    if(n%2==0){
        p2+=a[x];
    }
    else if(n%2==1){
        p1+=a[x];
    }
    
    cout<<p1<<" "<<p2<<"\n";

}



 
