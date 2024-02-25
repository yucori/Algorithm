#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[13];
bool visited[13];
int li[10005];
void dfs(int cnt, int Index);
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> li[i];
    }
    sort(li, li + n);
    dfs(0, 0);
}
void dfs(int cnt, int Index)
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
    for (int i = Index; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = li[i];
            dfs(cnt + 1, i + 1);
            visited[i] = false;
        }
    }
}