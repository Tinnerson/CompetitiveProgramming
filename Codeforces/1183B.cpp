#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        if(a[0]+k < a[n-1]-k){
            cout<<-1<<"\n";
            continue;
        }
        cout<<a[0]+k<<"\n";
    }
}






 
