#include <iostream>
using namespace std;
int n;
int st[305];
int temp[305];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> st[i];
        temp[i] = st[i];
    }
    st[1] = temp[1];
    st[2] = temp[1] + temp[2];
    st[3] = max(temp[1] + temp[3], temp[2] + temp[3]);
    for (int i = 4; i <= n; i++)
    {
        if (st[i - 3] + temp[i - 1] > st[i - 2])
        {
            st[i] += st[i - 3] + temp[i - 1];
        }
        else
        {
            st[i] += st[i - 2];
        }
    }
    cout << st[n];
    return 0;
}