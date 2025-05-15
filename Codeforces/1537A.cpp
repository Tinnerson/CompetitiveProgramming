#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int n, a, s=0;
        cin>>n;
        
        for(int i=0; i<n; i++){
            cin>>a;
            s+=a;
        }
        
        //cout<<"s, n: "<<s<<" "<<n<<"\n";
        
        if(s-n>=0) cout<<s-n<<"\n";
        else if(s-n<0) cout<<1<<"\n";
    }
}






 
