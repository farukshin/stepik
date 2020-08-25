#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 505;
bool used[MAX] = {false};
int color[MAX] = {0};

int ans[MAX] = {0};
int pos = 0;

vector<vector<int>> ss(MAX);
bool cycle = false;

void dfs(int v)
{
    used[v] = true;
    for (int u : ss[v])
        if (!used[u])
            dfs(u);
    ans[pos] = v;
    pos--;
}

void dfs_cycle(int v)
{
    color[v] = 1;

    for (int u : ss[v])
    {
        if (color[u] == 1)
        {
            cycle = true;
            return;
        }

        if (color[u] == 0)
            dfs_cycle(u);
    }
    color[v] = 2;
}

void solve()
{
    int n, m;
    int u, v;
    cin >> n >> m;
    pos = n;

    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        ss[u].push_back(v);
        if (u == v)
            cycle = true;
    }

    for (int i = 1; i <= n && !cycle; i++)
        if (color[i] == 0)
            dfs_cycle(i);

    cout << (cycle ? "NO" : "YES") << endl;

    if (cycle)
        return;

    for (int i = 1; i <= n; i++)
        if (!used[i])
            dfs(i);

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
