#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n, r;
	cin >> n >> r;
	int arr[n];

	for (int &i : arr)cin >> i;

	sort(arr, arr + n);

	int ans = 0;

	int i = 0;

	while (i < n) {

		if (r - arr[i] < 0) {
			break;
		}

		r -= arr[i];
		ans++;
		i++;

	}
	cout << ans << endl;

	return 0;
}