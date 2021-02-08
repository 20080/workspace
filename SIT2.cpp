#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {
	ll n;
	cin >> n;
	// int re = n;
// test 1
	ll x = 0, y = 0, z = 0;
	bool re = false;

	x = ceil(n / 2.0);
	y = x - 1;
	z = y - 1;
	if (z >= 0 && (x + y + z) == n)
		re = true;


	if (!re) {
		x = floor(n / 2.0);
		y = x - 1;
		z = y - 1;
		if (z >= 0 && x + y + z == (int)n)
			re = true;
	}

	if (re) {
		cout << z << " " << y << " " << x << endl;
	}
	else
		cout << -1 << endl;

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);



	int test;
	cin >> test;
	while (test--)
		solve();
}