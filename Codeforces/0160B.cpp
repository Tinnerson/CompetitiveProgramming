/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll x,n;

    string s;
    cin>>n>>s;

    sort(s.begin(),s.begin()+n);
    sort(s.begin()+n,s.end());

    j=n;
    ll count=0,count2=0;

    for(i=0;i<n;i++)
    {
        if(s[i]>s[j])
            count++;

        else if(s[i]<s[j])
            count2++;

        j++;
    }

    if(count==n || count2==n)
        cout<<"YES";

    else
        cout<<"NO";

    return 0;
}
