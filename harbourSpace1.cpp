#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>


bool solve() {
	vector<int>d(3);

	string s;
	cin >> s;

	int x = s[0] - 'A';
	int y = s.back() - 'A';

	if (x == y)
		return false;

	d[x] = 1; d[y] = -1;

	if(count(s.begin(), s.end(),'A'+x)==s.length()){
		d[3^x^y] = 1;
	}

	else
		d[3^x^y] = -1;
int bal = 0;
	for(char c : s){
		bal  += d[c-'A']; 
	}


	return bal==0;

}



int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int test;
	cin >> test;
	while (test--)
		if (solve())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

}