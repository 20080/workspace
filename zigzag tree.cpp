#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node (int val){
    	data = val;
    	left= NULL;
    	right = NULL;
    }


};

vector<vector<int>>can(10000);


void zigZag(node* root, int level){
	if(!root) return;

		can[level].push_back(root->data);
		// cout<<root->data<<" ";
		zigZag(root->left,level+1);
		// cout<<level<<" "; 
		zigZag(root->right,level+1);
}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	struct node* root =  new node(1);
	root->right = new node(5);
	root->left = new node(2);
	root->left->left = new node(3);
	root->left->right = new node(4);
	root->right->left = new node(6);
	root->right->right = new node(7);
	root->right->left->right = new node(8);
 	
 	zigZag(root,0);
 	bool sw=false;
 	for (int i = 0; i < can.size(); ++i)
 	{	
 		if(can[i].empty())break;
 		if(sw)
 			reverse(can[i].begin(),can[i].end());
 		sw = !sw;

 		for(int j=0; j<can[i].size();++j){
 			// if(can[i][j]==0)continue;
 			cout<<can[i][j]<<" ";
 		}
 		cout<<endl;
 	}

}