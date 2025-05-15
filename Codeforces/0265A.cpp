#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s, t;
    cin>>s>>t;
    
    int p=0;
    
    for(int i=0; i<t.size(); i++){
        if(t[i]==s[p]){
            p++;
        }
    }
    cout<<p+1<<"\n";
}




 
