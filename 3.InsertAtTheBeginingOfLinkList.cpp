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

void printlist(node * head) {
	node * curr = head ;
	while (curr != NULL) {
		cout << curr->data << " ";
		curr = curr->next;
	}
}

node *InsertatEnd(int x, node * head) {
	node * first = new node(x);
	first->data = x ;
	first->next = head ;
	return first;

}
int main() {
	node * head = new node(10);
	node * temp = new node(20);
	node * temp1 = new node(30);
	head -> next = temp;
	temp-> next = temp1;
	head = InsertatEnd(5, head);
	printlist(head);


}

