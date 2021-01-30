#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>



int solve(vector<vector<int>> grid, int k) {

	int m = grid.size(), n = grid[0].size();
	queue<vector<int>>q({{0, 0, k, 0}});
	int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, { -1, 0}};

	while (!q.empty()) {
		auto val = q.front();
		q.pop();
		int x = val[0], y = val[1], curK = val[2], step = val[3];
		if (x == m - 1 && y == n - 1)
			return step;
		for (auto d : dir) {
			int nx = x + d[0], ny = y + d[1];
			if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
				int nk = curK - grid[nx][ny];
				if (nk > -1) {
					q.push({nk, ny, nk, step + 1});
				}

			}
		}

	}
	return -1;


}



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

	cout << solve(v, 2) << endl;
}