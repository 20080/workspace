#include<bits/stdc++.h>
using namespace std;

int main() {

	//freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int N, K;
	cin >> N >> K;

	int stonesX[K];
	int stonesY[K];


	for (int i = 0; i < K; ++i)
	{
		cin >> stonesX[i];
	}
	for (int i = 0; i < K; ++i)
	{
		cin >> stonesY[i];
	}

	int ans = 0;

	for (int i = 0; i < K; ++i)
	{
		int a, b, c, d;
		a = abs(stonesX[i] - 1) + abs(stonesY[i] - 1);
		b = abs(stonesX[i] - 1) + abs(stonesY[i] - N);
		c = abs(stonesX[i] - N) + abs(stonesY[i] - 1);
		d = abs(stonesX[i] - N) + abs(stonesY[i] - N);
		int z = min(a, b);
		int k = min(c, d);
		ans += min(z, k);

	}

	cout << ans << endl;

}