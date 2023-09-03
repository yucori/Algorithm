#include <iostream>
#include <queue>
using namespace std;
int arr[105][105];
int visited[105];
int n, m;
int u, v;
int a, b;
queue<int> q;

void bfs(int x)
{
    q.push(x);
    while (!q.empty())
    {
        x = q.front();
        q.pop();
        for (auto i = 1; i <= n; i++)
        {
            if (arr[x][i] != 0 && !visited[i])
            {
                q.push(i);
                visited[i] = visited[x] + 1;
            }
        }
    }
}

int main()
{
    cin >> n;
    cin >> u >> v;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    bfs(u);
    if (visited[v] == 0)
        visited[v] = -1;
    cout << visited[v];
    return 0;
}