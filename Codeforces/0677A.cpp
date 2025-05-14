#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, h, a, w=0;
    cin>>n>>h;
    
    while(n--){
        cin>>a;
        if(a<=h){
            w++;
        }
        else if(a>h){
            w+=2;
        }
    }
    
    cout<<w<<"\n";
    
    return 0;
}
