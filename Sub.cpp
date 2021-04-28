#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

void solve() {

	string s = "", sn = "";

	cin >> s;
	int j;
	for (int i = 0; i < s.length(); ++i)
	{
		sn = "";
		for (int k = 0; i < s.length() - i; ++k)
		{
			j = i + k;
			sn = sn + s[j];
			cout << sn << endl;

		}
	}

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	solve();
}