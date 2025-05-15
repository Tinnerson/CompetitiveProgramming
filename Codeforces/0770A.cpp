#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin>>n>>k;
    string albet = "abcdefghijklmnopqrstuvwxyz";
    string s="";
    for(int i=0; i<k; i++){
        s+=albet[i];
    }
    for(int i=0; i<n-k; i++){
        s+=s[i];
    }
    cout<<s<<"\n";
}




 
