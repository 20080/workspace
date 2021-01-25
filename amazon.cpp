#include<bits/stdc++.h>
using namespace std;

int main() {


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a[] = {4, 5, 4, 6, 5};
	int b[5];
	copy(a, a + 5, b);

	a[3] = 100000;

	cout << b[3];
}