#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
struct Node {
	int data ;
	struct Node *left;
	struct Node *right;
	Node(int X) {
		data = X;
		left = NULL;
		right = NULL;
	}
};
void inorder(struct Node* root) {
	if (root == NULL) {
		return ;
	} else {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

void postorder(struct Node* root) {
	if (root == NULL) {
		return ;
	} else {
		postorder(root->left);
		postorder(root->right);
		cout << root->data << " ";
	}
}
void preorder(struct Node* root) {
	if (root == NULL) {
		return ;
	} else {
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}
int heightOfBinaryTree(struct Node* root) {
	if (root == NULL) return 0 ;
	int leftHeight = heightOfBinaryTree(root->left);
	int rightHeight = heightOfBinaryTree(root->right);
	return (max(leftHeight , rightHeight) + 1);
}
int sizeOfBinaryTree(struct Node* root) {
	if (root == NULL) return 0 ;
	int leftHeight = sizeOfBinaryTree(root->left);
	int rightHeight = sizeOfBinaryTree(root->right);
	return (leftHeight + rightHeight) + 1;
}
void printNodeAtKdistance(struct Node * root, int k ) {
	if (root == NULL) return ;
	if (k == 0) {
		cout << root->data << " ";
	} else {
		printNodeAtKdistance(root->left, k - 1);
		printNodeAtKdistance(root->right, k - 1);
	}
}
void printLevelOrder(struct Node* root) {
	int h = heightOfBinaryTree(root);
	// cout << h << nline;
	for (int i = 0 ; i < h ; i++) {
		printNodeAtKdistance(root, i);
		cout << nline;
	}
}
void printLevelOrderWithQueues(struct Node * root ) {
	if (root == NULL) return ;
	queue<Node *> q ;
	q.push(root) ;
	while (!q.empty()) {
		struct Node*curr = q.front();
		cout << curr->data << " ";
		q.pop();
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
}
void LeftSideOftree(struct Node * root ) {
	if (root == NULL) return ;
	queue<Node *> q ;
	q.push(root) ;
	while (!q.empty()) {
		int sz = q.size();
		for (int i = 0 ; i < sz; i++) {
			struct Node*curr = q.front();
			if (!i)
				cout << curr->data << " ";
			q.pop();
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
	}
}
int maxi = 0 ;
int  MaximumOfBinaryTree(struct Node* root) {
	if (root == NULL) return INT_MIN ;
	// maxi = max(maxi , root->data);
	// MaximumOfBinaryTree(root->left);
	// MaximumOfBinaryTree(root->right);
	int leftMax = MaximumOfBinaryTree(root->left);
	int rightMax = MaximumOfBinaryTree(root->right);
	return (max(root->data, max(leftMax, rightMax)));
}
bool childrenSumproperty(struct Node*root) {
	if (root == NULL) return true;
	if (root->left == NULL && root->right == NULL) return true;
	queue<Node *> q;
	q.push(root);
	while (!q.empty()) {
		struct Node* curr = q.front();
		q.pop();
		int a = 0 , b = 0 ;
		if (curr->left != NULL) {
			a = curr->left->data;
			q.push(curr->left);
		}
		if (curr->right != NULL) {
			b = curr->right->data;
			q.push(curr->right);
		}
		if (a == 0 && b == 0 ) continue;
		if ((a + b) != curr->data) return false;
	}
	return true;
}
bool  isBalancedTree(struct Node* root) {
	if (root == NULL) return false ;
	int leftHeight = isBalancedTree(root->left);
	int rightHeight = isBalancedTree(root->right);
	return (max(leftHeight , rightHeight) + 1);
}
int main() {
	// struct Node* root = new Node(1);
	// root->left = new Node(2);
	// root->right = new Node(3);
	// root->left->left = new Node(4);
	// root->left->right = new Node(5);
	// root->right->left = new Node(6);
	// root->right->right = new Node(70);
	// root->left->left->left = new Node(8);
	// root->left->right->left = new Node(9);
	// root->left->right->right = new Node(10);
	// root->left->right->left->left = new Node(11);
	// inorder(root);
	// cout << endl;
	// preorder(root);
	// cout << endl;
	// cout << heightOfBinaryTree(root) << nline;
	// printNodeAtKdistance(root, 3);
	// cout << nline << nline;
	// printLevelOrder(root);
	// cout << nline;
	// printLevelOrderWithQueues(root);
	// cout << nline;
	// cout << sizeOfBinaryTree(root);
	// cout << nline;
	// cout << MaximumOfBinaryTree(root) << nline;
	// cout  << nline;
	// LeftSideOftree(root);
	// cout << nline;

	// children sum properrty
	struct Node* root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(12);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	printLevelOrderWithQueues(root);
	if (childrenSumproperty(root)) cout << "YES" << nline;
	else cout << "NO" << nline;


}
