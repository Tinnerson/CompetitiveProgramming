#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    if(n<26){
        cout<<"NO"<<"\n";
        return 0;
    }
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string a = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<n; i++){
        for(int j=0; j<26; j++){
            if(s[i]==a[j]){
                a.erase(remove(a.begin(), a.end(), a[j]), a.end());
            }
        }
    }
    
    //cout<<a<<"\n";
    
    if(a==""){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    

}
