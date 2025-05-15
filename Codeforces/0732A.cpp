#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, r;
    cin>>k>>r;
    int k0=k;
    
    int c=1;
    
    while(k%10 != r){
        if(k%10==0){
            break;
        }
        c++;
        k+=k0;
    }
    cout<<c<<"\n";
}





 
