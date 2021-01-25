#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>


bool solve() {
	ll lo;
	cin >> lo;

	if (lo % 2 == 0)
		return false;
	ll ans = sqrt(lo);
	if (ans * ans == lo)
	{
		if (lo % 2 != 0)
			return true;
		else
			return false;
	}

	return true;
}



int main() {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int test;
	cin >> test;
	while (test--)
		if (solve())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
}