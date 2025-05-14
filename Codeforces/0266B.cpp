#include <iostream>
 
using namespace std;
 
int main()
{
    int n, x;
    cin>>n>>x;
    
    string a;
    cin>>a;
    
    while(x--){
        for(int i=0;i<n;i++){
            if(a[i]=='B' && a[i+1]=='G'){
                a[i] = 'G';
                a[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<a<<"\n";
    return 0;
}
