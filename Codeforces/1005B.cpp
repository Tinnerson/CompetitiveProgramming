#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a, b;
    cin>>a>>b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(a[0] != b[0]){
        cout<<a.size()+b.size()<<"\n";
        return 0;
    }
    int n;
    if(a.size()<=b.size()){
        n=a.size();
    }
    else if(b.size()<=a.size()){
        n=b.size();
    }
    
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[i]){
            c++;
        }
        else{
            break;
        }
    }
    
    cout<<a.size()-c+b.size()-c<<"\n";
}


 
