
#include<bits/stdc++.h>
using namespace std;
// implimenting Queue

struct Queue {
	int front , rear , size;
	int* queuearr;
	Queue(int n ) {
		front = rear = 0 ;
		size = n ;
		queuearr = new int(n) ; //dynamically allocating memory for queue array
	}

	void Enqueue(int data ) {
		if (size == rear) {
			cout << "Queue is Full\n";
			return;
		}

		else {
			queuearr[rear] = data;
			++rear;
		}
		return ;
	}

	void Dequeue() {
		if (front == rear ) {
			cout << "\nQueue is  empty\n";
			return;
		}
		// shift all the elements from index 2 till rear
		// to the left by one
		else {
			for (int i = 0; i < rear - 1; i++) {
				queuearr[i] = queuearr[i + 1];
			}

			// decrement rear
			rear--;
		}
		return;
	}

	// print queue elements
	void queueDisplay()
	{
		int i;
		if (front == rear) {
			cout << "\nQueue is  empty\n";
			return;
		}

		// traverse front to rear and print elements
		for (i = front; i < rear; i++) {
			cout << " " << queuearr[i];
		} cout << "\n";
		return;
	}




};

int main() {


}