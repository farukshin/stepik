#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 2e4 + 5;
bool used[MAX];
int sv[MAX];
int k = 0;
vector<vector<int>> ss(MAX, vector<int>());
queue<int> q;

void dfs(int v)
{
    used[v] = true;
    sv[v] = k;
    for (int u : ss[v])
    {
        if (used[u])
            continue;
        dfs(u);
    }
}

void solve()
{
    int n, m;
    int u, v;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        ss[u].push_back(v);
        ss[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (!q.empty())
    {
        int cur = q.front();
        if (used[cur])
            q.pop();
        else
        {
            k++;
            dfs(cur);
        }
    }

    cout << k << endl
         << sv[1];
    for (int i = 2; i <= n; i++)
        cout << " " << sv[i];
}

int main()
{
    ios_b;
    solve();
    return 0;
}
