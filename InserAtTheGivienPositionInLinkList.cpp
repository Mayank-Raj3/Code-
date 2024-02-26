#include <bits/stdc++.h>
using namespace std;
int num = 0 ;
struct node {
	int data;
	node * next;
	node(int x) {
		data = x;
		next = NULL;
	}
};

void  printlist(node * head) {
	node * curr = head;

	while (curr != NULL) {
		cout << curr->data << " ";
		++num;
		curr = curr->next;
	}
	cout << "\n" << num;

}

node *Insert(node * head , int data, int pos  ) {
	node *temp = new node(data);
	if (pos == 1) {
		temp ->next = head; // head will go to pos 2
		return temp;
	}

	node * curr = head ;
	for (int i = 1 ; i <= 2 ; i++) {
		curr = curr->next;
	}
	if (curr == NULL) {
		return head ;
	}
	temp -> next = curr->next;
	curr->next = temp;
	return head;


}


int main() {
	int n = 100 , pos = 2;
	node * head = new node(10);
	node * temp = new node(20);
	node * temp1 = new node(30);
	head -> next = temp;
	temp-> next = temp1;
	head = Insert(head, 69, 3);
	printlist(head);
}