#include <iostream>
using namespace std;
int n;
long long ans[95];

int main()
{
    cin >> n;
    ans[1] = 1;
    ans[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    cout << ans[n];
    return 0;
}