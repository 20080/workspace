#include <bits/stdc++.h>
using namespace std;


int main() {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	cout << "Enter the value you are going to insert\n";
	int n;
	cin >> n;
	cout << "Enter " << n << " numbers\n";
	vector<float> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (n < 4) {
		cout << "Invalid Output\n";
		return 0;
	}
	float max = 0;
	for (int i = 0; i < n; i++) {
		float x = 1;
		for (int j = i; j < i + 4 && j < n; j++) {
			x *= arr[j];
		}

		max = x > max ? x : max;
	}

	cout << max;

}