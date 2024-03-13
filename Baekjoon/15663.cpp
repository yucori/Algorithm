#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n, m;
int arr[13];
bool visited[13];
int li[10005];
void dfs(int cnt);
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> li[i];
    }
    sort(li, li + n);
    dfs(0);
}
void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && li[i] != temp)
        {
            visited[i] = true;
            arr[cnt] = li[i];
            temp = arr[cnt];
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}