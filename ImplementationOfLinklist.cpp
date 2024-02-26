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


int main() {
	node * head = new node(10);
	node * temp = new node(20);
	node * temp1 = new node(30);
	head -> next = temp;
	temp-> next = temp1;
	// cout << head->data << "-->" << temp->data << "-->" << temp1->data;
	printlist(head);
	// printlist(head);
	// it will print asme thng two times because
	// the head is copy of real head so the pointer will get back to its position
	// and ten again start from star

}



// int main()
// {
// 	Node *head = new Node(10);
// 	Node *temp1 = new Node(20);
// 	Node *temp2 = new Node(30);
// 	head->next = temp1;
// 	temp1->next = temp2;
// 	cout << head->data << "-->" << temp1->data << "-->" << temp2->data;
// 	return 0;
// }
