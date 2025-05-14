#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int n;
    cin>>n;
    
    string s;
    
    for(int i=0; i<n; i++){
        cin>>s;
        int a = s.size();
        if(s.size()>10){
            s = s[0] + to_string(a-2) + s[a-1];
            cout<<s<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
    
    
    
    return 0;
}
