#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, q;
	cin >> n >> q;
	ll arr[n + 1];
	arr[0] = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 2; i < n + 1; ++i)
	{
		arr[i] ^= arr[i - 1];
	}

	for (int i = 0; i < q; ++i)
	{
		ll a, b;
		cin >> a >> b;
		a--;
		cout << (arr[a]^arr[b]) << endl;
	}

	return 0;
}