#include "bits/stdc++.h"
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, q;
	cin >> n >> q;
	vector<int>a(n, 0), b(n, 0);
	int ans = 1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		a[i]--;
		b[a[i]] = i;
	}

	for (int i = 0; i < n - 1; ++i)
	{
		if (b[i] > b[i + 1])ans++;
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		set<pair<int, int>>st;
		if (a[l] + 1 < n) {
			st.insert({a[l], a[l] + 1});
		}

		if (a[l] - 1 >= 0) {
			st.insert({a[l] - 1, a[l]});
		}
		if (a[r] + 1 < n) {
			st.insert({a[r], a[r] + 1});
		}

		if (a[r] - 1 >= 0) {
			st.insert({a[r] - 1, a[r]});
		}

		for (auto x : st) {
			if (b[x.first] > b[x.second])
				ans--;
		}
		swap(a[l], a[r]);
		b[a[l]] = l;
		b[a[r]] = r;
		for (auto x : st) {
			if (b[x.first] > b[x.second])
				ans++;
		}
		cout << ans << endl;
	}

	return 0;

}