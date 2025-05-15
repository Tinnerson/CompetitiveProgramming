#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int c=0;
        
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                //cout<<"i: "<<i<<"\n";
                if(i<n-k+1){
                    //cout<<"yo"<<"\n";
                    for(int j=0; j<k; j++){
                        s[i+j]='W';
                    }
                }
                else{
                    for(int j=i; j<n; j++){
                        s[j]='W';
                    }
                }
                c++;
            }
        }
        //cout<<s<<"\n";
        cout<<c<<"\n";
    }
}
 
