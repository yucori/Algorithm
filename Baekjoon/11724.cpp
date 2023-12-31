#include <iostream>
#include <vector>
using namespace std;
int cnt = 0;
bool visited[1005];
vector<int> adj[1005];

void dfs(int x)
{
    visited[x] = true;
    for (int i = 0; i < adj[x].size(); i++)
    {
        int y = adj[x][i];
        if (!visited[y])
        {
            dfs(y);
        }
    }
}
int main()
{
    int n, m;
    int a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << '\n';
}