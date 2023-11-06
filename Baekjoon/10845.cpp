#include <iostream>
#include <queue>
using namespace std;
int n, num;
int main()
{
    string str;
    queue<int> q;
    cin >> n;
    while (n--)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            q.push(num);
        }
        else if (str == "pop")
        {
            if (q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (str == "size")
            cout << q.size() << '\n';
        else if (str == "empty")
            cout << q.empty() << '\n';
        else if (str == "front")
        {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if (str == "back")
        {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }
    return 0;
}