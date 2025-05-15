#include<bits/stdc++.h>
using namespace std;

#define int long long
const int M = 1e9 + 7;


set<int> square;
vector<int> sv;
void solve() {
	int n;
	cin >> n;
	int ans = upper_bound(sv.begin(),sv.end(), n) - sv.begin();	
	cout << ans << "\n";
}
signed main() {
	for(int i = 1; i * i < M; ++i)  {
		if (square.count(i * i) == 0) {
			sv.push_back(i * i);
			square.insert(i * i);
		}
	}
	for(int i = 1; i * i * i < M; ++i)  {
		if (square.count(i * i * i) == 0) {
			sv.push_back(i * i * i);
			square.insert(i * i * i);
		}
	}
	sort(sv.begin(),sv.end());
	int que;
	 cin >> que;
	while(que--) {
		solve();
	}

}
