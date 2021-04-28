#include<bits/stdc++.h>
using namespace std;
#define ll long long

int col[1000];
int diag1[1000];
int diag2[1000];
int n = 8;
char a[8][8];
static int countt = 0;
void solution(int y) {
	if (y == n) {
		countt++;
		return;
	}
	else {
		for (int i = 0; i < n; ++i)
		{
			if (col[i] || diag1[i + y] || diag2[i - y + n - 1])
				continue;
			if (a[y][i] == '*')
				continue;
			col[i] = diag1[i + y] = diag2[i - y + n - 1] = 1;
			solution(y + 1);
			col[i] = diag1[i + y] = diag2[i - y + n - 1] = 0;

		}
	}


}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			cin >> a[i][j];
		}
	}


	solution(0);
	cout << countt;
	return 0;
}