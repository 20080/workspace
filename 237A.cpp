#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n;
	cin >> n;

	int h1, m1, h, m;
	cin >> h1 >> m1;
	int ans = 0;
	int aans = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> h >> m;
		if (h1 == h && m == m1) {
			ans++;
			h1 = h;
			m1 = m;
			aans = max(aans, ans);
			continue;
		}
		ans = 0;

		h1 = h;
		m1 = m;
	}

	cout << aans + 1;

	return 0;
}