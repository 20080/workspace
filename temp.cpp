
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define oop freopen("output.txt", "w", stdout);
#define iip freopen("input.txt", "r", stdin);


int dose(int n) {

	int a[n], b[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	ll min = 100000000000000000;
	for (int i = 0; i < n; i++)
		min = min < a[i] ? min : a[i];

	bool same = true;
	int temp;
	int ind;
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			temp = b[i];
			ind = i;
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			if (temp != b[i]) {
				same = false;
				break;
			}
		}
	}
	int count = 0;
	bool suc = false;
	if (!same) {

		for (int i = 0; i < n; i++) {
			while (a[i] != min) {
				a[i] -= b[i];
				count++;
				if (a[i] == min)
					suc = true;
			}
		}
		if (suc)
			cout << count << endl;
		else
			cout << -1 << endl;
	}

	else {
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				while (a[ind] != a[i]) {
					if (a[ind] > a[i]) {
						a[ind] -= b[ind];
						count++;
					}
					else {
						a[i] -= b[i];
					}

					if (a[i] < 0 || a[ind] < 0)
					{
						suc = true;
						break;
					}
				}
				if (suc)
					break;



			}
			if (suc)
				cout << -1 << endl;
			else
				cout << count << endl;

			else {

				while (a[ind] != a[i]) {

					a[i] -= b[i];

					if (a[i] < a[ind])
					{
						suc = true;
						break;
					}
				}
				if (suc)
					break;


				if (suc)
					cout << -1 << endl;
				else
					cout << count << endl;

			}

		}
	}


	return 5;

}




int main() {
	oop
	iip
	int num;
	cin >> num;

	dose(num);


}
