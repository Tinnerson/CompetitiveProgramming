#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    getline(cin, s);
    
    if(s=="{}"){
        cout<<0<<"\n";
        return 0;
    }
    
    sort(s.begin(), s.end());
    
    //cout<<s<<"\n";
    
    s.erase(s.size()-2, 2);
    s.erase(0, s.size()*2/3);
    
    //cout<<s<<"\n";
    
    s.erase(unique(s.begin(), s.end()), s.end());
    
    //cout<<s<<"\n";
    cout<<s.size()<<"\n";
    
    
}

 
