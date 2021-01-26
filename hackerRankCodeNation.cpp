#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

void solve(int s) {
	vector<ll> v(s, 0);
	for (auto &a : 	v)
		cin >> a;
	int ans = 0;
	for (int i = 0; i < s; i++) {
		ans += v[i];

		for (int j = i; j < s; ++j)
		{
			ans = ans ^ v[j];
		}
	}
	cout << ans;
}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int cases;
	cin >> cases;
	solve(cases);
}