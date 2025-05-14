#include <iostream>
 
using namespace std;
 
int main()
{
    int n,x,y,z,sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        sumx = sumx + x;
        sumy = sumy + y;
        sumz = sumz + z;
    }
    
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
