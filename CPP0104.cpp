#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>

#define pb push_back

ll factorial(int n) {
	if (n == 1)
		return 1;
	return n*factorial(n-1);
}

void solve() {
	int n;
	cin >> n;
	ll res = 1;
	for (int i=2;i<=n;i++)
		res+=factorial(i);
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t=1;
	// cin >> t;
	while (t--) {
		solve();
	}
}