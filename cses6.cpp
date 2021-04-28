#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ll n;
	cin >> n;

	for (ll i = 1; i <= n; ++i)
	{
		cout << ((i * i) * (i * i - 1)) / 2 - 4 * (i - 1)*(i - 2) << endl;
	}


	return 0;
}