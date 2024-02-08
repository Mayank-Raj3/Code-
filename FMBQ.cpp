#include <bits/stdc++.h>
using namespace std;

class FrontMiddleBackQueue
{
public:
	deque<int> right , left ;

	FrontMiddleBackQueue()
	{
	}

	// [F    1stdq     B]    [F    2nd_dq     B]

	void balance() {
		//right me kam rhega
		if (left.size() < right.size()) {
			// right hamesha ik kam rhega

			left.push_front(right.back());
			right.pop_back();

			// cout << right.size() << " " << left.size() << endl;
		}

		//lower me jada rhaega
		if (left.size() > right.size() + 1) {

			// agr left me 2 zada
			// so make it equal

			right.push_back(left.front());
			left.pop_front();

			// cout << right.size() << " " << left.size() << endl;
		}
	}
	void pushFront(int val)
	{
		right.push_front(val);
		balance();

	}

	void pushMiddle(int val)
	{
		if (right.size() == left.size()) {
			// as per rules we want right hamesha ik kam ho tho push front in left
			left.push_front(val);
		}
		else
		{
			// make equal
			right.push_back(val);
		}
	}

	void pushBack(int val)
	{

		left.push_back(val);
		balance();
	}

	int popFront()
	{
		if (left.size() == 0 and right.size() == 0) return -1 ;

		int x;

		if (right.empty()) {
			x = left.front();
			left.pop_front();
		}
		else {
			x = right.front();
			right.pop_front();
		}
		balance();
		return x;
	}

	int popMiddle()
	{

		if (left.size() == 0 and right.size() == 0) return -1 ;

		int x;
		if (right.size() == left.size()) {
			x = right.back();
			right.pop_back();
		}
		else {
			// left me zada he rahgea
			x = left.front();
			left.pop_front();
		}
		return x;


	}

	int popBack()
	{
		if (left.size() == 0 and right.size() == 0) return -1 ;
		int x = left.back();
		left.pop_back();
		balance();
		return x;
	}
};
/*

Iss trh se he maintain karna ha

1. Deques Initialization:
   - Maintain two deques named `first` and `second` to represent the two halves of the queue.

2. Push Operation:
   - When pushing to the front of the queue, push to the front of the `first` deque.
   - When pushing to the back of the queue, push to the back of the `second` deque.

3. Pop Operation:
   - When popping the front element, pop from the front of the `first` deque.
   - When popping the back element, pop from the back of the `second` deque.

4. Size Maintenance:
   - Ensure that the size of the `first` deque is either equal to or one less than the size of the `second` deque.

5. Middle Element Addition:
   - When pushing, the middle element is added to the end of the `first` deque if the sizes of both deques are equal or one less.
   - When popping the middle element, pop the last element of the `first` deque if the sizes are equal; otherwise, pop the first element of the `second` deque.

6. Size Adjustment:
   - To maintain the size constraint, shift the last element of the `first` deque to the front of the `second` deque, or vice versa, as needed.

In summary, this approach ensures efficient operations for both pushing and popping while maintaining a balanced size between the two deques, allowing easy access to the middle element.
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q;
	cin >> q;
	FrontMiddleBackQueue *obj = new FrontMiddleBackQueue();
	for (int i = 0; i < q; i++)
	{
		string op;
		cin >> op;
		if (op == "pushFront")
		{
			int val;
			cin >> val;
			obj->pushFront(val);
		}
		else if (op == "pushMiddle")
		{
			int val;
			cin >> val;
			obj->pushMiddle(val);
		}
		else if (op == "pushBack")
		{
			int val;
			cin >> val;
			obj->pushBack(val);
		}
		else if (op == "popFront")
		{
			cout << obj->popFront() << '\n';
		}
		else if (op == "popMiddle")
		{
			cout << obj->popMiddle() << '\n';
		}
		else if (op == "popBack")
		{
			cout << obj->popBack() << '\n';
		}
	}
	return 0;
}