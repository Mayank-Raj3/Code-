#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void printlist(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    } cout << endl;
}

Node * delhead(Node *head) {
    if (head == NULL) {
        return head;
    }
    else if (head->next == NULL && head -> prev == NULL) {
        delete(head);
        return NULL;
    }

    Node *curr = head;
    curr = head->next;
    head->next = NULL;
    delete(head);
    curr->prev = NULL;
    return curr;



}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = delhead(head);
    printlist(head);
    return 0;
}
