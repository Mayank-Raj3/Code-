#include <bits/stdc++.h>
using namespace std;


class MyCircularQueue
{
public:
    queue<int> q;
    int mx = 0;
    MyCircularQueue(int k)
    {
        mx = k;
    }

    bool enQueue(int value)
    {
        if (q.size() < mx)
        {
            q.push(value);
            return true;
        }
        return false;
    }

    bool deQueue()
    {
        if (q.size() == 0)
        {
            return false;
        }
        else
        {
            q.pop();
            return true;
        }
    }

    int Front()
    {
        if (q.size() == 0)
        {
            return -1;
        }
        else
        {
            return q.front();
        }
    }

    int Rear()
    {
        if (q.size() == 0)
        {
            return -1;
        }
        else
        {
            return q.back();
        }
    }

    bool isEmpty()
    {
        return q.size() == 0;
    }

    bool isFull()
    {
        return q.size() == mx;
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

    MyCircularQueue myCircularQueue(k);

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "enQueue")
        {
            int val;
            cin >> val;

            if (myCircularQueue.enQueue(val))
                cout << "True\n";
            else
                cout << "False\n";
        }
        else if (s == "deQueue")
        {
            if (myCircularQueue.deQueue())
                cout << "True\n";
            else
                cout << "False\n";
        }
        else if (s == "Front")
        {
            cout << myCircularQueue.Front() << "\n";
        }
        else if (s == "Rear")
        {
            cout << myCircularQueue.Rear() << "\n";
        }
        else if (s == "isEmpty")
        {
            if (myCircularQueue.isEmpty())
                cout << "True\n";
            else
                cout << "False\n";
        }
        else if (s == "isFull")
        {
            if (myCircularQueue.isFull())
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