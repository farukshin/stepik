#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 505;
bool used[MAX];
int k = 0;
vector<vector<int>> ss(MAX, vector<int>());

void dfs(int v)
{
    used[v] = true;
    for (int u : ss[v])
    {
        if (used[u])
            continue;

        k--;
        dfs(u);
    }
}

void solve()
{
    int n, m;
    int u, v;
    cin >> n >> m;
    k = m;

    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        ss[u].push_back(v);
        ss[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        if (!used[i])
            dfs(i);

    cout << (k > 0 ? "YES" : "NO") << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}