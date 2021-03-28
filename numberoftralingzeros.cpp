#include<bits/stdc++.h>
#include <cstdio>
#define MAX 5000
using namespace std;
map<string, int> mp ;
int main() {
	ios::sync_with_stdio(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
		mp.clear();
		string s, sn, ss ;
		int j;
		cin >> s;
		int l = s.length();
		for (int k = 0; k < l; k++) {
			ss = "";
			for (int i = 0; i < l - k; i++) {
				j = k + i;
				ss = ss + s[j];
				cout << ss << " " << l - k << endl;
			}
		}


	}
	return 0;
}