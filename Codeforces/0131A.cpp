#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    string t=s.substr(1, s.size()-1);
    bool tIsUpper=true;
    bool sIsUpper=true;
    
    //cout<<"t: "<<t<<"\n";
    
    for(int i=0; i<s.size(); i++){
        if(!isupper(s[i])){
            sIsUpper=false;
            //cout<<"sfalse"<<"\n";
            break;
        }
    }
    for(int i=0; i<t.size(); i++){
        if(!isupper(t[i])){
            tIsUpper=false;
            //cout<<"tfalee"<<"\n";
            break;
        }
    }
    
    if(islower(s[0]) && tIsUpper || sIsUpper){
        for(int i=0; i<s.size(); i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
            else if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
        cout<<s<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
}
