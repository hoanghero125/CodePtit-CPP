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

int isPalindrome(ll n) {
	ll res = 0, temp = n;
	while (temp != 0) {
		res = res*10 + temp%10;
		temp/=10;
	}
	if (res == n)
		return 1;
	return 0;
}

void solve() {
	ll n;
	cin >> n;
	if (isPalindrome(n))
		cout << "YES" << "\n";
	else	
		cout << "NO" << "\n";
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