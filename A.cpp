#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>


bool solve() {
	ll lo;
	scanf("%Ld", &lo);

	while (lo % 2 == 0)
		lo /= 2;

	return lo > 1;
}



int main() {

	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int test;
	cin >> test;
	while (test--)
		if (solve())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
}