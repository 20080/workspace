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

vector<int>resultRight,resultLeft;


void leftview(node* root, int level){
	if(!root) return;

		if(level==resultLeft.size())
			resultLeft.push_back(root->data);
	
		leftview(root->left,level+1);
	
	// cout<<level<<" "; 

		leftview(root->right,level+1);
}

void rightview(node* root, int level){
	
	if(!root) return;

		if(level==resultRight.size())
			resultRight.push_back(root->data);
		rightview(root->right,level+1);
		rightview(root->left,level+1);
	// cout<<level<<" ";
}



int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	struct node* root =  new node(1);
	root->right = new node(5);
	root->left = new node(2);
	// root->left->left = new node(3);
	root->left->right = new node(4);
	root->right->left = new node(6);
	root->right->right = new node(7);
	root->right->left->right = new node(8);
 	
 	leftview(root,0);
 	rightview(root,0);
 	reverse(resultRight.begin(),resultRight.end());
 	for(int x : resultLeft){
 		if(x==-1) break;
 		cout<<x<<" ";
 	}
 	for(int x : resultRight){
 		if(x==-1) break;
 		cout<<x<<" ";
 	}

}