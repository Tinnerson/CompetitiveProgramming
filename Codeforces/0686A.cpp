#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, x;
    cin>>n>>x;
    
    char c;
    long long d;
    long long s=0;
    for(int i=0; i<n; i++){
        cin>>c;
        cin>>d;
        
        if(c=='+'){
            x+=d;
        }
        else if(c=='-'){
            if(x>=d){
                x-=d;
            }
            else{
                s++;
            }
        }
    }
    
    cout<<x<<" "<<s<<"\n";
}
 
