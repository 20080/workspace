#include<bits/stdc++.h>
using namespace std;


bool isValidWalk(std::vector<char> walk) {
	if (walk.size() > 10)
		return false;
	if (walk.size() < 4)
		return false;
	int n = 0, s = 0, e = 0, w = 0;
	for (int i = 0; i < 10; i++) {
		if (walk[i] == 'n' && n >= 0 && s == 0) {
			n++;
		}
		else if (walk[i] == 's' && s >= 0 && n == 0) {
			s++;
		}
		else if (walk[i] == 'n' && s > 0) {
			s--;
		}
		else if (walk[i] == 's'&n > 0) {
			n--;
		}

		else if (walk[i] == 'e' && e >= 0 && w == 0) {
			e++;
		}
		else if (walk[i] == 'w' && w >= 0 && e == 0) {
			w++;
		}
		else if (walk[i] == 'e' && w > 0) {
			w--;
		}
		else if (walk[i] == 'w' && e > 0) {
			e--;
		}

	}
	if (n == 0 && w == 0 && e == 0 && s == 0)
		return true;
	return false;

}

int main() {


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<char>like = {'s', 'e', 'w', 'n', 'n', 's', 'e', 'w', 'n', 's'};
	cout << isValidWalk(like);
}
