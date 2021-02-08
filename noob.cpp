#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {

	int a, b;
	cin >> a >> b;
	int big = 0, lg;
	if (a == b)
		cout << "Yes" << endl;
	else {

		if (a > b) {
			big = a;
		}
		else
			big = b;

		lg = log2(big);

		if (pow(2, lg) == big)
			cout << "No" << endl;
		else
			cout << "Yes";

	}



}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int test;
	cin >> test;
	while (test--)
		solve();
}