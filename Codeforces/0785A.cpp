#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int c=0;
    string a;
    while(n--){
        cin>>a;
        if(a=="Tetrahedron"){
            c+=4;
        }
        else if(a=="Cube"){
            c+=6;
        }
        else if(a=="Octahedron"){
            c+=8;
        }
        else if(a=="Dodecahedron"){
            c+=12;
        }
        else if(a=="Icosahedron"){
            c+=20;
        }
    }
    cout<<c<<"\n";
}



 
