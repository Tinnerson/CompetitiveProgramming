#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    int a[1000];
    
    int j=0;
    
    for(int i=1; i<=1666; i++){
        if(i%3==0 || i%10==3){
            continue;
        }
        else{
            a[j]=i;
            j++;
        }
    }
    
    while(t--){
        int n;
        cin>>n;
        cout<<a[n-1]<<"\n";
    }
}







 
