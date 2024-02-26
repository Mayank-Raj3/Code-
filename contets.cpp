#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        deque<int>dq;
        int q;
        cin >> q;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "insertback")
            {
                int x;
                cin >> x;
                dq.push_back(x);
            }
            else if (s == "eraseback")
            {
                if (dq.size() != 0)
                    dq.pop_back();
            }
            else if (s == "insertfront")
            {
                int x;
                cin >> x;
                dq.push_front(x);
            }
            else if (s == "erasefront")
            {
                if (dq.size() != 0)
                    dq.pop_front();
            }
            else if (s == "printfront")
            {
                if (dq.size() != 0)
                    cout << dq.at(0) << '\n';
                else
                    cout << 0 << '\n';
            }
            else if (s == "printback")
            {
                if (dq.size() != 0)
                    cout << dq.at(dq.size() - 1) << '\n';
                else
                    cout << 0 << '\n';
            }
            else {
                int x;
                cin >> x;
                if (dq.size() != 0)
                    cout << dq.at(x) << '\n';
                else
                    cout << 0 << '\n';
            }
        }
    }
}