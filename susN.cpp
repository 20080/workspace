#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solution() {

	list<ll>*adj[1000];
	ll N, X;
	cin >> N >> X;
	for (int i = 0; i < N - 1; ++i)
	{
		ll u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--)
		solution();
	return 0;
}