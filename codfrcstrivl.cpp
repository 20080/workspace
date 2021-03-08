#include <bits/stdc++.h>
using namespace std;


string s;

bool check(string z) {
	stack <char> x;
	x.push('$');
	if (z[0] == ')')
		return false;
	for (int i = 0; i < z.length(); i++) {

		if (z[i] == '(')
			x.push(z[i]);
		else if (x.top() == '$')
			return false;
		else
			x.pop();

	}
	// cout << x.top() << endl;
	return x.top() == '$';
}

bool make(char A, char B, char C) {
	string x = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A')
			x += A;
		if (s[i] == 'B')
			x += B;
		if (s[i] == 'C')
			x += C;
	}
	return check(x);
}

bool fun() {

	if (make('(', '(', '('))
		return true;
	else if (make('(', '(', ')'))
		return true;
	else if (make('(', ')', ')'))
		return true;
	else if (make('(', ')', '('))
		return true;
	else if (make(')', '(', '('))
		return true;
	else if (make(')', '(', ')'))
		return true;
	else if (make(')', ')', ')'))
		return true;
	else if (make(')', ')', '('))
		return true;

	// cout << s << endl;
	return false;

}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t;
	cin >> t;

	while (t--)
	{
		cin >> s;
		if (fun())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}


}