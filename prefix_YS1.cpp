#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {

	ll n, q;
	cin >> n >> q;
	vector<ll>arr(n + 1, 0);
	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	// for (int i : arr)cout << i << " ";
	// cout << endl;
	while (q--) {
		ll r, l;
		cin >> r >> l;
		cout << arr[l] - arr[r] << endl;
	}


}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	solve();
}