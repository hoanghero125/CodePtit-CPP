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

int isBalance(int n) {
	int odd = 0, even = 0;
	while (n != 0) {
		if ((n%10)&1) 
			odd++;
		else 
			even++;
		n/=10;
	}
	if (odd == even) 
		return 1;
	return 0;
}

void solve() {
	int n, count = 0; 
	cin >> n;
	int start = pow(10, n-1), end = pow(10,n);
	for (int i=start;i<end;i++) {
		if (isBalance(i)) {
			count++;
			cout << i << " ";
			if (count % 10 == 0)
				cout << "\n";
		}
	}
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