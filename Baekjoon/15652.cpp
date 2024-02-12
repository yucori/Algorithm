#include <iostream>
using namespace std;
int n, m;
int arr[13];
bool visited[13];
void dfs(int cnt, int Index);
int main()
{
    cin >> n >> m;
    dfs(0, 1);
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
    for (int i = Index; i <= n; i++)
    {
        if (!visited[i])
        {
            arr[cnt] = i;
            dfs(cnt + 1, i);
            visited[i] = false;
        }
    }
}