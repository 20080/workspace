#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	freopen("maxcross.txt", "r", stdin);
	freopen("maxcross.txt", "w", stdout);

	int N, K, B;
	cin >> N >> K >> B;
	int arr[N];
	fill(arr, arr + N, 1);
	// memset(arr, 1, sizeof(arr));
	for (int i = 0; i < B; ++i)
	{
		int x;
		cin >> x;
		arr[x - 1] = 0;
	}
	int ma = INT_MIN, sum = 0;
	for (int c : arr) {
		if (sum < 0)sum = 0;
		sum += c;
		// cout << sum << " ";
		ma = max(sum, ma);
	}
	// cout << endl;
	cout << K - ma;
}