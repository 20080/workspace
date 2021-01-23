#include<bits/stdc++.h>
using namespace std;

map<int, int> mtest;
vector<int> tests;
//offsets for column and rows
int dj[] = {0, 1};
int di[] = {1, 0};
// //keeps pow(10,i)//where i==1 to 20
// int tenpow[20];
map<int, int>visited; //keeps visited status

/*IMPORTANT LSB is AT position 0 AND MSB is at 8*/

int getPosition(int x, int y) {
	return x * 3 + y; //bottom left right at 0 and top left at 3;
}

int getNumber(int num, int position) {
	int i, j;
	//consider num = 123456789 and position =3

	j = num;
	j /= pow(10, position); //123456789/1000==123456

	return j % 10; //i.e. 6

}

//replacing number (SWAP function HELPER)
int setNumber(int number, int position, int newNumber) {
//if number = 123456789, position ==3, newNumber ==5
	int finalAns =  0;
	int  j = number;
	int rightPart = number % (int)pow(10, position); //rightPart = 789

	finalAns = newNumber * pow(10, position) + rightPart; //this makes it 5789

	j /= pow(10, position + 1); //remove that much number 12345

	j *= pow(10, position + 1); //add 0's on that place 123450000
	finalAns += j;

	return finalAns;
}

int isPrimeTest(int n) {
	return (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19);
}



int swaping(int number, int position1, int position2) {
	int result = setNumber(number, position1, getNumber(number, position2));
	return setNumber(result, position2, getNumber(number, position1));
}


int solve


int main() {
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int test;
	cin >> test;

	while (test--) {
		int t, num = 0;
		for (int i = 0; i < 9; ++i)
		{
			cin >> t;
			num *= 10;
			num += t;

		}

		tests.push_back(num);
		mtest[num] = -1; //mtest is a map to map shortest path from goal state to current
		cout << swaping(num, 3, 5) << endl;

	}

	solve();

}