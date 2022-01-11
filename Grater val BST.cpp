#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>

struct node
{
	int data;
	struct node* left;
	struct node* right;

	node (int val) {
		data = val;
		left = NULL;
		right = NULL;
	}


};

vector<int>ans;
void trav(node* root) {
	if (!root) return;
	trav(root->right);
	cout << root->data << " ";
	ans.push_back(root->data);
	trav(root->left);

}
int k =0;
void modi(node* root) {
	if (!root) return;
	modi(root->right);
	// cout << root->data << " ";
	root->data = ans[k++];
	modi(root->left);

}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	struct node* root =  new node(50);
	root->right = new node(70);
	root->left = new node(30);
	root->left->left = new node(20);
	root->left->right = new node(40);
	root->right->left = new node(60);
	root->right->right = new node(80);
	// root->right->left->right = new node(8);

	trav(root);
	for (int i = 1; i < ans.size(); ++i)
	{
		ans[i]=ans[i]+ans[i-1];
	}
	modi(root);
	trav(root);
	// for (int i = ans.size()-1; i >= 0; --i)
	// {
	// 	cout<<ans[i]<<" ";
	// }
}