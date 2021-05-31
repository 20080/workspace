#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	vector<int> ans;
	while (t--) {

		ll n , m;
		cin >> n >> m;
		ll count = 0;
		ll a = 1 , b = a + 1;
		while ( a < b && b <= n ) {
			// cout << b << " ";
			if ( m < b) {
				if ( m <= a) {
					cout << " cond 1 a = " << a << " b = " << b << endl;
					count += ( n - a );
					cout << " count incr by " << (n - a) << endl;
				} else {
					cout << " cond 2 a = " << a << " b = " << b << endl;
					int ans = ( m - 1) * ( n - m);
					count += ans ;
					cout << " count incr by " << ans << endl;
				}
			}

			else {
				int k = a;
				for (int i = b ; i <= n ; i++) {
					if ( ( ( m % k) % i) == ( ( m % i) % k)) {
						// cout << " cond 3 a = " << k << " b = " << i << endl;
						count++;
					}
					else
						k++;
				}
			}
			a++;
			b++;
		}

		cout << count << endl;

	}
	return 0;
}