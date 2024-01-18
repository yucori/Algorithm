#include <iostream>
#include <algorithm>
using namespace std;
int n;
int day[20];
int fee[20];
int ans[20];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> day[i] >> fee[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (i + day[i] > n + 1)
        {
            ans[i] = ans[i + 1];
        }
        else
        {
            ans[i] = max(ans[i + 1], ans[i + day[i]] + fee[i]);
        }
    }
    cout << ans[1];
    return 0;
}