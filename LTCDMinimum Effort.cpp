#include <bits/stdc++.h>
using namespace std;


// int dir[4][3] = {{1, 0, 2}, {0, 1, 3}, { -1, 0, 4}, {0, -1, 5}};

long long power(int n, int m) {
	if (m == 0)
		return 1;
	return n * power(n, m - 1);
}


string re(int val) {

	if (val == 0)
		return "";


	return val % 2 == 0 ? re(val / 2) + "0" : re(val / 2) + "1";
}





int bfs(int val) {
	string s = "";
	for (int i = 1; i <= val; i++) {
		int p = i;

		s += re(p);

	}

	reverse(s.begin(), s.end());
	long long ans = 0;

	for (int i = s.length() - 1; i > 0; i--) {

		if (s[i] == '1') {
			ans += power(2, i) % 1000000007;

			// ans = ans % 1000000007;
		}
	}


	// ans = ans % 1000000007;

	return (int)ans;
}

int minimumEffortPath(vector<vector<int>>& h) {

	int M = h.size(), N = h[0].size();

	vector<vector<int>>burden(M, vector<int>(N, INT_MAX));
	queue<pair<int, int>> q;
	int dir[4][2] = {{1, 0}, {0, 1}, { -1, 0}, {0, -1}};
	burden[0][0] = 0;
	q.push({0, 0});
	while (!q.empty()) {
		pair<int, int> current = q.front();
		q.pop();

		int i = current.first, j = current.second;
		for (auto d : dir) {

			int x = d[0] + i, z = d[1] + j;
			if (x >= 0 && x < M && z < N && z >= 0) {
				int diff = abs(h[x][z] - h[i][j]);
				int maxz = max(burden[i][j], diff);
				if (diff < burden[x][z]) {
					burden[x][z] = diff;
					q.push({x, z});
				}
			}

		}
	}

	return burden[M - 1][N - 1];

}




int solve() {


	int left = 0;
	int right = 10e6;

	while (left < right) {
		int mid = (left + right) / 2;

		if (bfs(mid))
			right = mid;
		else
			left = mid + 1;
	}

	return left;

}





int main() {

	// freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cout << bfs(42) << endl;
	// cout << power(2, 42);
	// cout << value("11011", 4);

}