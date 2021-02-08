#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {

	int t0, t1, t2;
	cin >> t0 >> t1 >> t2;

	int near = 0, far = 0;
	if (abs(t0 - t1) < abs(t0 - t2)) {
		near = t1;
		far = t2;
	}
	else {
		near = t2;
		far = t1;
	}
	bool re = false;

	int ans = 0;
	// if (near > far)
	// {

	ans = abs(t0 - near) + abs(near - far);;
	cout << ans << endl;

	// }

	// else {

	// 	ans = abs(t0 - near) + abs(near - far);
	// 	cout << ans << endl;

	// }



}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);



	int test;
	cin >> test;
	while (test--)
		solve();
}