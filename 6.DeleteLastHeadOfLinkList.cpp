#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
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

Node *delLastHead(Node *head) {
    if (head == NULL)return NULL;
    else {
        while (head->next->next != NULL) {
            head = head->next;
        }
        Node *temp = head->next;

        delete(head);
        return temp;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printlist(head);
    head = delLastHead(head);
    printlist(head);

    return 0;
}
