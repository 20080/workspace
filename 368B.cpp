#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;

	vector<int>arrN(n, 0);
	vector<int> dp(n, 0);
	for (int &x : arrN) {
		cin >> x;
	}


	set<int>st;
	for (int i = n - 1; i >= 0; --i)
	{
		st.insert(arrN[i]);
		dp[i] = st.size();
	}

	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;
		cout << dp[x - 1] << endl;
	}



	return 0;
}