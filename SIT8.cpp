#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {

	int len, lim;
	cin >> len >> lim;
	int a[len];

	for (int i = 0; i < len; i++)
		cin >> a[i];

	int ans = 0;

	for (int i = 0; i < len; ++i)
	{
		if (a[i] >= lim) {
			ans++;
			continue;
		}

		for (int j = i ; j < len; ++j)
		{
			if (i == j)
				continue;
			if ((a[j] + a[i]) >= lim) {
				ans++;
				a[j] = 0;
				a[i] = 0;
				break;
			}

		}
	}

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