#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define MOD 1000000007
#define print(x) cout<<x



int main() {

	static int n = 88;

	int a = n;

	if (n - 4) {

		a = n - 2;

		cout << n << endl;

		n = n - 6;

		main();
	}
	return 0;

}