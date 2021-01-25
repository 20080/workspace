#include<iostream>
#include<vector>
using namespace std;

#define ll long long

std::vector<ll> v;

void factCal() {
	v.push_back(1);
	for (int i = 1; i <= 50; ++i)
	{
		v.push_back(i * v[i - 1]);
	}
}

int main(int argc, char const *argv[])
{

	factCal();
	cout << v[50];

	return 0;
}