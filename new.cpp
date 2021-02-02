#include <bits/stdc++.h>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix) {

	int R = matrix.size(), C = matrix[0].size();
	int res = 0;
	vector<vector<int>>dp(R + 1, vector<int>(C + 1, 0));

	for (int i = 1; i < R + 1; i++) { //remove -1 to and reduce dp mat by 1 and un comment the below code
		for (int j = 1; j < C + 1; j++) {
			// if(i==0||j==0){
			//     dp[i][j]=matrix[i][j]-'0';
			//     if(dp[i][j]&&res==0) res=1;
			//     continue;
			// }

			if (matrix[i - 1][j - 1] != '0') {
				int side = min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
				res = max(res, side);
				cout << res << " ";
				dp[i][j] = max(side, dp[i][j]);
			}

		}
	}

	return res * res;


}

int main() {										//507544127  193864606

	//#ifdef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//#endif
//take input of matrix here
	//cout << (int)'0';//call funtion name to it;
	long long a = 16;
	int b = 20;
	for (int i = 0; i <= a * 10; i = i + a)
	{	if (i == 0)
			continue;
		cout << i << endl;
	}

}
a = 50
    a + b
