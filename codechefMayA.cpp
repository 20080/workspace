#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define MOD 1000000007


ll solution()
{

	ll n;
	cin >> n;
	if (n == 1)
		return n;
	n--;
	ll ans = 1;
	ll base = 2;
	while (n) {

		//fukin binary expension
		if (n & 1) {
			// cout << n << " ";
			// cout << ans << " " << base << " ";
			ans = ans * base % MOD;

		}
		base = base * base % MOD;
		n = n / 2;
	}
	// cout << base << " ";

	return ans;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}