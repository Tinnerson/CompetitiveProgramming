#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s;
    getline(cin, s);
    
    char c = s[0];
    s[0] = toupper(c);
    
    cout<<s<<"\n";
 
    return 0;
}
