#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// int m;
	// cin >> m;
	// int a[m] = {0};
	// for (int i = 0; i < m; i++) {
	// 	cin >> a[i];
	// }
	// int diff = 0;
	// for (int i = 0; i < m; i++) {
	// 	int s1 = 0, s2 = 0;
	// 	for (int j = 0; j < i; j++) {
	// 		if (i == j) {
	// 			s1 = a[i];
	// 			continue;
	// 		}

	// 		s1 += a[j];
	// 	}
	// 	for (int k = i; k < m; k++) {
	// 		if (i == 0)
	// 			k++;
	// 		s2 += a[k];
	// 	}
	// 	if (i == 0) {
	// 		diff = s2 - s1;
	// 		if (diff < 0)
	// 			diff *= -1;
	// 	}
	// 	else {
	// 		int z = s2 - s1;
	// 		if (z < 0)
	// 			z *= -1;
	// 		diff = z < diff ? z : diff;
	// 	}
	// }

	// cout << diff;


	// int N, F;
	// cin >> N >> F;

	// int fault[F];
	// for (int i = 0; i < F; ++i)
	// {
	// 	cin >> fault[i];
	// }

	// vector<ll> dp;
	// // dp.push_back(1);
	// // dp.push_back(1);
	// for (int i = 0, j = 0; i < N; ++i)
	// {

	// 	if (i == 0) {
	// 		if (i == fault[j]) j++, dp.push_back(0);
	// 		else dp.push_back(1);
	// 		continue;
	// 	}
	// 	if (i == 1)
	// 	{
	// 		if (i == fault[j]) j++, dp.push_back(0);
	// 		else dp.push_back(1);
	// 		continue;
	// 	}
	// 	if (i == fault[j]) {
	// 		j++;
	// 		dp.push_back(dp[i - 2]);
	// 	}
	// 	else
	// 		dp.push_back(dp[i - 1] + dp[i - 2]);

	// }

	// cout << dp[N - 1] % 1000000007;


//new solution



	int t = 0;
	cin >> t;
	map<char, int>m;
	m['+'] = 1;
	m['-'] = 2;
	m['/'] = 3;
	m['*'] = 4;
	m['^'] = 5;
	while (t--)
	{
		stack<char>a;
		string st = "";
		cin >> st;
		for (int i = 0; i < st.size(); i++) {
			if (isalpha(st[i]))
				cout << st[i];

			else {
				if (!a.empty() && (st[i] != '(' || st[i] != ')')) {
					while (m[a.top()] > m[st[i]])
					{
						cout << a.top();
						a.pop();
					}
					a.push(st[i]);
				}
				else if (st[i] != '(' || st[i] != ')')
					a.push(st[i]);
			}

		}




	}
}

