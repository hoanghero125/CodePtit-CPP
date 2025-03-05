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
	int n;
	cin >> n;
	double res = 1.0;
	for (int i=2;i<=n;i++)
		res+=1.0/i;
	cout << fixed << setprecision(4) << res;	
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