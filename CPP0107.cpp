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
	string qs1 = "ABBADCCABDCCABD", qs2 = "ACCABCDDBBCDDBB", keys;
	int n;
	cin >> n;
	if (n == 101)
		keys = qs1;
	else
		keys = qs2;
	float res = 0;
	char temp;
	for (int i=0;i<15;i++) {
		cin >> temp;
		if (temp == keys[i])
			res+=(float)10.0/15.0;
	}
	cout << fixed << setprecision(2) << res << endl;
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