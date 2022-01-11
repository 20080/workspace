#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

//using struct for better data management
struct Node{
	bool up,down,left,right,destination;
	bool visited = false;
};



// example input given below

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//size of grid//let sq grid 
	int n;
	cin>>n;

	//source
	int x=0,y=0;
	cin>>x>>y;

	vector<vector<Node*>>arr(n,vector<Node*>(n));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{	Node *m = new Node();
			cin>>m->up>>m->down>>m->left>>m->right>>m->destination;
			arr[i][j] = m;
		}
	}


	queue<pair<pair<int,int>,Node*>>q;
	q.push({{x,y},arr[x][y]});
	arr[x][y]->visited = true;
	vector<pair<int,int>>ans;

	while(!q.empty()){
		Node *P = NULL;
		auto tempPair = q.front();
		P = tempPair.second;
		q.pop();

		int x1,y1;
		x1 = tempPair.first.first;
		y1 = tempPair.first.second;

		if(arr[x1][y1]->destination)ans.push_back({x1,y1});

		//check for up connection
		if( x1-1>=0 && arr[x1-1][y1]->down&&arr[x1][y1]->up && !arr[x1-1][y1]->visited){
			arr[x1-1][y1]->visited = true;
			q.push({{x1-1,y1},arr[x-1][y1]});
		}

		//check for down connection
		if( x1+1<n && arr[x1+1][y1]->up&&arr[x1][y1]->down && !arr[x1+1][y1]->visited){
			arr[x1+1][y1]->visited = true;
			q.push({{x1+1,y1},arr[x+1][y1]});

		}

		//check for left connection
		if( y1-1>=0 && arr[x1][y1-1]->right&&arr[x1][y1]->left && !arr[x1][y1-1]->visited){
			arr[x1][y1-1]->visited = true;
			q.push({{x1,y1-1},arr[x][y1-1]});
		}

		//check for right
		if( y1+1<n && arr[x1][y1+1]->left&&arr[x1][y1]->right && !arr[x1][y1+1]->visited){
			arr[x1][y1+1]->visited = true;
			q.push({{x1,y1+1},arr[x1][y1+1]});
		}

		}

cout<<"bulb(s) which is/are connected to the source"<<endl;
for(auto a : ans)cout<<a.first<<" "<<a.second<<endl;

}

//use of input.txt recommended just  
//input from the gdoc file
// 5 //size
// 4 1//source
// u d l r destionation
// ^ ^ ^ ^ ^
// | | | | |
// 0 1 0 1 0 // pos 0,0
// 0 0 1 1 0 // pos 0,1
// 0 0 0 1 1
// 0 1 1 0 0
// 1 0 0 1 0
// 1 0 0 1 0 // pos 1,0
// 0 1 1 1 0
// 0 0 1 0 1
// 1 1 0 0 0
// 1 1 0 0 0
// 0 0 0 1 1
// 1 0 1 1 0
// 0 1 0 1 0
// 1 0 1 1 0
// 0 0 1 1 0
// 0 0 1 0 1
// 1 0 0 1 0
// 1 1 1 0 0
// 0 0 0 1 1
// 0 0 1 0 1
// 0 1 1 0 0
// 0 0 1 1 0
// 1 0 1 1 0
// 0 0 1 1 0
// 0 1 0 0 1