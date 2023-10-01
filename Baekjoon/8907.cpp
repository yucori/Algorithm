#include <iostream>
using namespace std;
int n, m;
int cnt[1005];
void check()
{
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x;
            cin >> x;
            {
                cnt[i] += x;
                cnt[j] += x;
            }
        }
    }
    for (int i = 0; i < n; i++)
        sum += cnt[i] * (n - 1 - cnt[i]);
    cout << n * (n - 1) * (n - 2) / 6 - sum / 2 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
}