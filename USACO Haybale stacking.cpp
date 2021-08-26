#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, q;
	cin >> n >> q;
	int arr[n] = {0};
	while (q--) {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			arr[a]++;
		}
		else {
			for (int i = a; i <= b; ++i)
			{
				arr[i]++;
			}
		}
	}
	sort(arr, arr + n);
	cout << arr[n / 2];

	return 0;
}