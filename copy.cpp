#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define iip freopen("input.txt", "r", stdin);
#define oop freopen("output.txt", "w", stdout);


int main() {										//507544127  193864606

	iip
	oop
	int d = 2;
	int n = 10;
	int counter1 = 0, counter2 = 0, counter3 = 0;
	for (int i = 1; i <= n; ++i) {
		counter1++;								//5*4*2

		for (int j = i; j <= n; ++j) {
			counter2++;

			for (int k = j ; k <= n; ++k)
				d = d * 2;
		}
	}
	cout << d << "\n";
	cout << counter1 << " " << counter2 << " " << counter3;

}