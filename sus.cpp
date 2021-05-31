#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define MOD 1000000007

int c1, c2, c3, c4;
int ansX, ansO;
bool won = true;//means x won
// bool secondWon = true;//means x won second time in cross
bool frSpace = false;//means dosent have any free space
bool checkRows(string a) {

	for (int i = 0; i < 3; i++) {
		if (a[i] == '_') {
			frSpace = true;
			return false;
		}
	}

	if (a[0] == a[1] && a[1] == a[2]) {
		if (a[0] == 'O') {
			ansO = 1;
			won = false;
		}
		else {
			ansX = 1;
		}
		return 1;
	}
	return false;
}

bool checkColumns(string a, string b, string c, int x) {

	if (a[x] == '_' || b[x] == '_' || c[x] == '_') {
		frSpace = true;
		return false;
	}

	if (a[x] == b[x] && b[x] == c[x]) {
		if (a[x] == 'O') {
			ansO = 1;
			won = false;
		}
		else
			ansX = 1;
		return 1;
	}
	return false;
}
bool checkDiag1(string a, string b, string c) {

	if (a[0] == '_' || b[1] == '_' || c[2] == '_') {
		frSpace = true;
		return false;
	}


	if (a[0] == b[1] && b[1] == c[2]) {
		if (a[0] == 'O') {
			ansO = 1;
			won = false;
		}
		else
			ansX = 1;

		return 1;
	}
	return false;
}

bool checkDiag2(string a, string b, string c) {

	if (a[2] == '_' || b[1] == '_' || c[0] == '_') {
		frSpace = true;
		return false;
	}

	if (a[2] == b[1] && b[1] == c[0]) {
		if (a[2] == 'O') {
			ansO = 1;
			won = false;
		}
		else
			ansX = 1;
		return 1;
	}
	return false;
}

ll solution()
{

	string L1, L2, L3;
	cin >> L1 >> L2 >> L3;
	ansX = 0;
	ansO = 0;
	won = true;
	frSpace = false;
	int X = 0, O = 0, C_ = 0;
	X += count(L1.begin(), L1.end(), 'X');
	X += count(L2.begin(), L2.end(), 'X');
	X += count(L3.begin(), L3.end(), 'X');
	O += count(L1.begin(), L1.end(), 'O');
	O += count(L2.begin(), L2.end(), 'O');
	O += count(L3.begin(), L3.end(), 'O');
	C_ += count(L1.begin(), L1.end(), '_');
	C_ += count(L2.begin(), L2.end(), '_');
	C_ += count(L3.begin(), L3.end(), '_');

	checkRows(L1);
	checkRows(L2);
	checkRows(L3);
	checkColumns(L1, L2, L3, 0);
	checkColumns(L1, L2, L3, 1);
	checkColumns(L1, L2, L3, 2);
	checkDiag1(L1, L2, L3);
	checkDiag2(L1, L2, L3);

	if ((ansX == 1 && ansO == 1) || ((X - O) < 0) || (X - O) > 1) return 3;
	else if (X == 0 && O == 0 && C_ == 9)return 2;
	else if (ansX == 1 && ansO == 0 && X > O)return 1;
	else if (ansX == 0 && ansO == 1 && X == O)return 1;
	else if (ansX == 0 && ansO == 0 && C_ == 0)return 1;
	else if (ansX == 0 && ansO == 0 && C_ > 0)return 2;
	return 3;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}