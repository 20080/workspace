#include<bits/stdc++.h>
using  namespace std;




int main() {


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int m, n;
	cin >> m >> n;
	vector<vector<int>> v(m, vector<int> (n, 0));
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


}