#include "bits/stdc++.h"
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int>a(n, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	vector<int>b(a);
	sort(b.begin(), b.end());
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (b[i] != a[i]) {
			ans++;
			// cout << a[i] << endl;
		}
	}
	cout << ans;
	return 0;

}