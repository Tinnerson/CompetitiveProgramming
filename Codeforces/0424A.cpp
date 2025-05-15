#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a=0, b=0, c=0;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0; i<n; i++){
        if(s[i]=='x'){
            a++;
        }
        else if(s[i]=='X'){
            b++;
        }
    }
    
    
    
    //cout<<a<<" "<<b<<"\n";
    
    if(a==b){
        cout<<0<<"\n";
        cout<<s<<"\n";
        return 0;
    }
    else if(a>b){
        //cout<<"hi"<<"\n";
        while(a != b){
            for(int j=0; j<n; j++){
                if(s[j]=='x'){
                    //cout<<"imp"<<"\n";
                    s[j]='X';
                    a--;
                    b++;
                    c++;
                    break;
                }
            }
        }
    }
    else if(b>a){
        while(b != a){
            for(int l=0; l<n; l++){
                if(s[l]=='X'){
                    s[l]='x';
                    b--;
                    a++;
                    c++;
                    break;
                }
            }
        }
    }
    cout<<c<<"\n";
    cout<<s<<"\n";

}
