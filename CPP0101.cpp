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

void solve() {
	ll n, res;
	cin >> n;
	res = n*(n+1)/2;
	cout << res << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}