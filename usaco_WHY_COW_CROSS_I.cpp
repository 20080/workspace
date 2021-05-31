#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	freopen("maxcross.in", "r", stdin);
	freopen("maxcross.out", "w", stdout);

	int N, K, B;
	cin >> N >> K >> B;
	int arr[N] = {0};
	for (int i = 0; i < B; ++i)
	{
		int x;
		cin >> x;
		x--;
		arr[x] = 1;
	}
	int prefix[N + 1] = {0};

	for (int i = 1; i <= N; ++i)
	{
		if (arr[i - 1])prefix[i]++;
		prefix[i] += prefix[i - 1];
	}

	int ans = INT_MAX;

	for (int i = K; i <= N; ++i)
	{
		ans = min(prefix[i] - prefix[i - K], ans);
	}
	cout << ans;

}