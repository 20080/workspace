#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

vector<bool>container (1100005, false);

void solve() {
	ll x;
	cin >> x;
	cout << (container[x] ? "YES\n" : "NO\n");

}



int main() {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	container[0] = 1;

	for (int i = 0; i < 1000005; ++i) {

		container[i + 2020] = container[i] | container[i + 2020];
		container[i + 2021] = container[i] | container[i + 2021];

	}


	int test;
	cin >> test;
	while (test--)
		solve();
}