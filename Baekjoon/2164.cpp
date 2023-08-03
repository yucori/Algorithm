#include <iostream>
#include <queue>
using namespace std;
int n;
int temp;
int main()
{
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    while (q.size() > 1)
    {
        q.pop();
        temp = q.front();
        q.pop();
        q.push(temp);
    }
    cout << q.front();
    return 0;
}