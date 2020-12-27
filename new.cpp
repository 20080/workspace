#include <bits/stdc++.h>
using namespace std;

int functionf(int);

int dp(int);
int lookup[10000] = {0};

int main() {										//507544127  193864606

	//#ifdef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w," stdout);
	//#endif
	int T;
	int data;
	cin >> T;
	while (T > 0) {
		cin >> data;
		dp(data);
		T--;
	}

}

int dp(int data) {


	lookup[0] = 0;
	if (data == 0)
		cout << lookup[0] << endl;

	lookup[1] = 1;
	if (data == 1)
		cout << lookup[1] << endl;

	if (data > 1) {
		for (int i = 2; i <= data; i++) {
			lookup[i] = lookup[i - 1] + lookup[i - 2];
		}
		int an = 0;
		while (data >= 0) {
			an += lookup[data] * lookup[data];
			data--;
		}

		cout << an % 10000000000007 << endl;
	}
	return 0;


}




