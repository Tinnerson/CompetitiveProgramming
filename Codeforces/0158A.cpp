#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin>>n>>k;
    int a[n];
    int c=0;
    int z=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0){
            z++;
        }
    }
    

    sort(a, a+n, greater<int>());
    
    int t=a[k-1];
    for(int i=0; i<n; i++){
        if(a[i]>=t){
            if(a[i] != 0){
                c++;
            }
        }
    }
    cout<<c<<"\n";
    
    
}



 
