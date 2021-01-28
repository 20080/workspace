#include<iostream>
using  namespace std;

int sup (int n) {

	long long ans = 1, bits = 0, num;
	for (int i = 2; i <= n; i++)
	{
		bits = 0;
		num = i;
		while (num != 0)
		{
			num >>= 1;
			bits++;
		}

		ans = ans << bits;
		ans = (ans | i) ;
		ans = ans % 1000000007;
	}
	return ans;


	// if (n == 1)
	// 	return 1;
	// long ns = sup(n - 1);

	// int bitsNum = 0;
	// int num = n;
	// while (num) {
	// 	num >>= 1;
	// 	bitsNum++;
	// }

	// ns <<= bitsNum;
	// ns = ns | n;
	// ns %= (int)1e9 + 7;
	// return ns;
}


int main() {

	cout << sup(42) << endl;
}