#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>
int solve() {

	int boys, girls, pairs;
	cin >> boys >> girls >> pairs;

	vector<int>a(pairs, 0);

	vector<int>b(pairs, 0);

	for (int i = 0; i < pairs; i++)
		cin >> a[i];
	for (int i = 0; i < pairs; i++)
		cin >> b[i];



	if (boys == 1 && girls == 1)
		return 0;
	int validans1 = 0, ans = 0;



	for (int i = 0; i < pairs - 1; i++) {
		if (b[i] != )

		}

	for (int j = 0; j < pairs; j++)
	{
		if (a[j] != a[j])
			validans++;
	}
	return validans;
}



int main() {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int test;
	cin >> test;
	while (test--)
		cout << solve() << endl;
}