#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string k="qwertyuiopasdfghjkl;zxcvbnm,./";
    
    char d;
    cin>>d;
    string s;
    cin>>s;
    if(d=='L'){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<k.size()-1; j++){
                if(s[i]==k[j]){
                    s[i]=k[j+1];
                    break;
                }
            }
        }
    }
    else if(d=='R'){
        for(int i=0; i<s.size(); i++){
            for(int j=1; j<k.size(); j++){
                if(s[i]==k[j]){
                    s[i]=k[j-1];
                    break;
                }
            }
        }
    }
    
    cout<<s<<"\n";

}


 
