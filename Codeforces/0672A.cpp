#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    string s="";
    for(int i=1; i<=5000; i++){
        s+=to_string(i);
    }
    cout<<s[n-1]<<"\n";

}
