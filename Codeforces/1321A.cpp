#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    float x=0, y=0;
    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
            x++;
        }
        else if(b[i]>a[i]){
            y++;
        }
    }
    
    //cout<<"x, y: "<<x<<" "<<y<<"\n";
    if(x==0 && y==0){
        cout<<-1<<"\n";
    }
    else if(x != 0){
        cout<<ceil((y+1)/x)<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
}
 
