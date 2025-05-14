#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
bool IsPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, x;
	cin>>n>>m;

	for(int i=n+1; i<=50; i++){
		if(IsPrime(i)){
			x=i;
			break;
		}
	}

	if(x==m){
		cout<<"YES"<<"\n";
	}
	else if (x != m){
		cout<<"NO"<<"\n";
	}
}
