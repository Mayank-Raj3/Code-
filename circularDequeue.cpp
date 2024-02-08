#include <bits/stdc++.h>
using namespace std;

class MyCircularDeque
{
public:

	deque<int> arr;
	int sz ;
	MyCircularDeque(int k)
	{
		sz = k ;
	}

	bool insertFront(int value)
	{
		if (arr.size() < sz) {
			arr.push_front(value);
			return true ;
		}
		else {
			return false ;
		}
	}

	bool insertLast(int value)
	{
		if (arr.size() < sz) {
			arr.push_back(value);
			return true ;
		}
		else {
			return false ;
		}
	}

	bool deleteFront()
{	if (arr.size() != 0) {
			arr.pop_front();
			return true ;
		}
		else {
			return false ;
		}

	}

	bool deleteLast()
	{
		if (arr.size() != 0) {
			arr.pop_back();
			return true ;
		}
		else {
			return false ;
		}
	}

	int getFront()
	{
		if (arr.size() != 0)
			return arr.front();
		else return -1 ;

	}

	int getRear()
	{
		if (arr.size() != 0)
			return arr.back();
		else return -1 ;

	}

	bool isEmpty()
	{
		return (arr.size() == 0);

	}

	bool isFull()
	{
		return (arr.size() == sz);

	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q;
	cin >> q;

	int k;
	cin >> k;

	MyCircularDeque myCircularDeque(k);

	while (q--)
	{
		string s;
		cin >> s;

		if (s == "insertFront")
		{
			int val;
			cin >> val;
			if (myCircularDeque.insertFront(val))
				cout << "True\n";
			else
				cout << "False\n";
		}
		else if (s == "insertLast")
		{
			int val;
			cin >> val;
			if (myCircularDeque.insertLast(val))
				cout << "True\n";
			else
				cout << "False\n";
		}
		else if (s == "deleteFront")
		{
			if (myCircularDeque.deleteFront())
				cout << "True\n";
			else
				cout << "False\n";
		}
		else if (s == "deleteLast")
		{
			if (myCircularDeque.deleteLast())
				cout << "True\n";
			else
				cout << "False\n";
		}
		else if (s == "getFront")
		{
			cout << myCircularDeque.getFront() << "\n";
		}
		else if (s == "getRear")
		{
			cout << myCircularDeque.getRear() << "\n";
		}
		else if (s == "isEmpty")
		{
			if (myCircularDeque.isEmpty())
				cout << "True\n";
			else
				cout << "False\n";
		}
		else if (s == "isFull")
		{
			if (myCircularDeque.isFull())
				cout << "True\n";
			else
				cout << "False\n";
		}
		else
		{
			assert(1 == 0); //This never happen
		}
	}

	return 0;
}