#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

int dir[4][4] = {{1, 1}, { -1, -1}, { -1, 1}, {1, -1}};

//provide input like this..
// 10 8 //size of the grid
// 8 4 //starting position
// . . . . . . . .
// . 1 . . . 1 . .
// . . . . 1 . . .
// . . . . . . . .
// . . . 1 . . 1 .
// . . . . . . . .
// . . . . . . 1 .
// . . 1 . . 1 . .
// . . . . . . . .
// . . . . 1 . . .
//1 is for path is blocked and 
//
//example output
// . . Y . Y . Y . 
// . ▢ . Y . ▢ . Y 
// Y . Y . ▢ . Y . 
// . Y . Y . Y . Y 
// Y . Y ▢ Y . ▢ . 
// . Y . Y . Y . . 
// Y . Y . Y . ▢ . 
// . Y ▢ Y . ▢ . Y 
// Y . Y . . . Y . 
// . Y . Y ▢ Y . Y 
// 31

int main() {
	//use this if i/p o/p file avalible
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int n, m;
	cin >> n >> m;
	int xp, yp;
	cin >> xp >> yp;
	vector<vector<bool>>arr(n, vector<bool>(m));
	vector<vector<string>>aa(n, vector<string>(m, "."));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char x;
			cin >> x;
			if (x == '.')
				arr[i][j] = true;
			else {
				aa[i][j] = "▢";
				arr[i][j] = false;
			}
		}
	}


	queue<pair<int, int>>q;
	int ans = 0;
	q.push({xp, yp});
	arr[xp][yp] = false;
	while (!q.empty()) {
		pair<int, int> cor = q.front();
		q.pop();
		int x = cor.first;
		int y = cor.second;
		arr[x][y] = false;

		for (auto d : dir) {
			if (x + d[0] < n && x + d[0] >= 0 && y + d[1] < m && y + d[1] >= 0 && arr[x + d[0]][y + d[1]]) {
				aa[x+d[0]][y+d[1]] = 'Y';
				q.push({x + d[0], y + d[1]});
			}
		}

	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<aa[i][j]<<" ";
			if(aa[i][j]=="Y")ans++;
		}
		cout<<endl;
	}
	cout<<ans;

	return 0;

}