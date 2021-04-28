#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	ll t;
	cin >> t;
	ll ans = 0;
	while (t--) {
		ll x, y;
		cin >> x >> y;
		if (x > y) {
			if (x % 2 == 0) {
				ans = x * x - y + 1;
			}
			else {
				x--;
				ans = x * x + y;
			}
		}
		else {
			if (y % 2 == 0) {
				y--;
				ans = y * y + x;
			}
			else {
				ans = y * y - x + 1;
			}
		}

		cout << ans << endl;

	}



	return 0;
}