#include<bits/stdc++.h>
using namespace std;


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<char>like = {'s', 'e', 'w', 'n', 'n', 's', 'e', 'w', 'n', 's'};
	cout << isValidWalk(like);
}
