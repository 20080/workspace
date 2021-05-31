#include <bits/stdc++.h>

using namespace std;

//constant initialization
const int maxn = 2e5 + 10;

//variables used for the current problem
long long n, q, a[maxn], u, v;

void solve() {
	cin >> n >> q;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		a[i] ^= a[i - 1]; //Calculate the xor prefix sum
	}
	while (q--) {
		cin >> u >> v;
		cout << (a[v] ^ a[u - 1]) << "\n";
	}
	return;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}