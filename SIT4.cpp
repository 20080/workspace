#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {

	int a[3], b[3];
	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];

	sort(a, a + 3);
	sort(b, b + 3);

	ll ans = a[0] * b[0] + a[1] * b[1] + a[2] * b[2];

	cout << ans << endl;


}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);



	int test;
	cin >> test;
	while (test--)
		solve();
}