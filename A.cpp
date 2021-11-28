#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

list<int>*adj;
class graph
{
public:
	int V;
	graph(int V) {
		this->V = V;
		adj = new list<int>[V];
	};

	void addEdge(int u, int v) {
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

};



int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	graph g(20);
	g.addEdge(0, 2);
	g.addEdge(2, 3);
	g.addEdge(7, 2);
	g.addEdge(15, 0);
	g.addEdge(16, 9);

	vector<bool>visited(21, false);
	queue<int>q;
	q.push(2);
	visited[2] = true;

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int v : adj[u]) {

			if (!visited[v]) {
				visited[v] = true;
				cout<<"Connected to "<<u<<"--- "<<v<<endl;
				q.push(v);
			}
		}
	}


}