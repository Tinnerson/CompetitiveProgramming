#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100000],sum=0,mini=INT_MAX;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<0&&k>0)
            a[i]*=-1,k--;
        sum+=a[i];
        mini=min(mini,a[i]);
    }
    if(k%2==1)
        sum-=(2*mini);
    cout<<sum<<endl;
    return 0;
}
/**
*/
