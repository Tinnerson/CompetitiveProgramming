#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin>>k;
    int a[12];
    int s=0;
    for(int i=0; i<12; i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s<k){
        cout<<-1<<"\n";
        return 0;
    }
    
    sort(a, a+12);
    int c=0;
    int b=11;
    while(k>0){
        k-=a[b];
        c++;
        b--;
    }
    cout<<c<<"\n";

}



 
