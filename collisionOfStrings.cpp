#include<bits/stdc++.h>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	string s1 = "jgwoajzztsdtlyoitbbzkfzeuddnushxgqqmdwgmvqewsixawdzgysmvprthibufvvrqhniyvnm";
	string s2 = "ipdvefraoybpgmxrkhdcvxbnogftqgqmqlghlvsyyckbobtfejpbsqcsmcmzqsujmilpbrpanjs";


	sort(s1.begin(), s1.end()) ;
	sort(s2.begin(), s2.end()) ;

	cout << s1 << endl << s2 << endl;
}



bool checkIfCanBreak(string s1, string s2) {

	if (s1.length() != s2.length())
		return false;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if (s1 == s2)
		return true;
	int zz = s1.length() - 1;
	while (s1[zz] == s2[zz])
		zz--;
	bool desive = s1[zz] > s2[zz]; //s1 is greater overall

	if (desive) {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] >= s2[i])
				continue;
			else {
				return false;
			}
		}

	}
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] <= s2[i])
				continue;
			else {
				return false;
			}
		}
	}

	return true;


}

