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

int fortuneNumCheck(int n) {
	if (n == 0 || n == 6 || n == 8)
		return 1;
	return 0;
}

void solve() {
	ll n;
	cin >> n;
	while (n != 0) {
		if (!fortuneNumCheck(n%10)) {
			cout << "NO" << "\n";
			return;
		}
		n/=10;
	}
	cout << "YES" << "\n";
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