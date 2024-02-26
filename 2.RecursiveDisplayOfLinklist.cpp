#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* next;
	node(int x) {
		data = x;
		next = NULL;
	}
};
// print linklist using recursion
void printlist(node * head) {
	node * curr = head ;
	if ( curr == NULL) return ;
	cout << curr->data << " ";
	curr = curr->next;
	printlist(curr);
}


int main() {
	node * head = new node(10);
	node * temp = new node(20);
	node * temp1 = new node(30);
	head -> next = temp;
	temp-> next = temp1;
	printlist(head);

}



