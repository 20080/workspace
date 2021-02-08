#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {
	int a[3];
	int n, p, r;
	cin >> a[0] >> a[1] >> a[2];
	// 4    8     2
	bool done = false;
	if (a[0]*a[1] == a[2]) {
		n = 0;
		p = 1;
		r = 2;
		done = true;
	}
	else if (a[0]*a[2] == a[1]) {
		n = 0;
		p = 2;
		r = 1;
		done = true;
	}
	else if (a[1]*a[2] == a[0]) {
		n = 1;
		p = 2;
		r = 0;
		done = true;
	}


	if (done)
	{
		cout << "Yes";
		cout << "\n" << a[p] << " " << a[n] << " " << a[r] << endl;
	}
	else
		cout << "No" << endl;


}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);



	int test;
	cin >> test;
	while (test--)
		solve();
}