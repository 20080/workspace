#include<bits/stdc++.h>
using namespace std;

#define ll long long

int solve();

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int test;
	cin >> test;

	while (test--)
		solve();

}

int solve() {

	ll A, B;

	string AA, BB;
	cin >> AA >> BB;
	// bool AAA,BBB;
	// AAA = A<0;
	// BBB= B<0;
	string lowerA, HigherA;
	string lowerB, HigherB;
	string answerHigher, answerlower;
	HigherA = AA.substr(0, AA.size() / 2);
	lowerA =  AA.substr(AA.size() / 2, AA.size());

	HigherB = BB.substr(0, BB.size() / 2);
	lowerB =  BB.substr(BB.size() / 2, BB.size());

	int carry = 0;


	answerlower = to_string(stoll(lowerB) + stoll(lowerA));

	if (answerlower.size() > AA.size() / 2);
	carry = answerlower[0];
	answerlower = answerlower.substr(1, answerlower.size());

	if (back > 0);
	HigherA = to_string(stoll(HigherA) + carry);

	answerHigher = to_string(stoll(HigherA) + stoll(HigherB));

	cout << answerHigher + answerlower;


	return 0;

}



























var total = 0
for (var i = myArray.length - 1; i <= 0; i--) {
	total += myArray[i];
}