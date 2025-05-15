#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string albet="abcdefghijklmnopqrstuvwxyz";
    string calbet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int s1ac[26], s1cac[26], s2ac[26], s2cac[26];
    
    for(int i=0; i<26; i++){
        s1ac[i]=0;
        s1cac[i]=0;
        s2ac[i]=0;
        s2cac[i]=0;
    }
    
    for(int i=0; i<s1.size(); i++){
        for(int j=0; j<26; j++){
            if(s1[i]==albet[j]){
                s1ac[j]++;
                break;
            }
        }
        for(int j=0; j<26; j++){
            if(s1[i]==calbet[j]){
                s1cac[j]++;
                break;
            }
        }
    }
    
    for(int i=0; i<s2.size(); i++){
        for(int j=0; j<26; j++){
            if(s2[i]==albet[j]){
                s2ac[j]++;
                break;
            }
        }
        for(int j=0; j<26; j++){
            if(s2[i]==calbet[j]){
                s2cac[j]++;
                break;
            }
        }
    }
    
    for(int i=0; i<26; i++){
        if(s2ac[i]>s1ac[i] || s2cac[i]>s1cac[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    
    cout<<"YES\n";

}

 
