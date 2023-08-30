#include <iostream>
#include <vector>
#define FIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int num = 0;
bool visited[105];
vector<int> adj[105];

void dfs(int x)
{
    visited[x] = true;
    for (int i = 0; i < adj[x].size(); i++)
    {
        int y = adj[x][i];
        if (!visited[y])
        {
            dfs(y);
            num++;
        }
    }
}
int main()
{
    FIO;
    int n, m;
    int a, b;
    cin >> n;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    cout << num;
    return 0;
}