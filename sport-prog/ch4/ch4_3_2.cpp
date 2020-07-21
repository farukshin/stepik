#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 1005;
vector<vector<int>> ss(MAX, vector<int>());
bool used[MAX];
bool usedLocal[MAX];

void bfs(int v, int &ans)
{
    queue<pair<int, int>> q;

    q.push({v, 0});
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (auto chield : ss[cur.first])
            if (!usedLocal[chield])
            {
                usedLocal[chield] = true;
                q.push({chield, cur.second + 1});
                if (!used[chield])
                    ans += cur.second + 1;
            }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ss[u].push_back(v);
        ss[v].push_back(u);
    }

    int ans = 0;
    memset(used, false, sizeof(used));
    for (int i = 1; i <= n; i++)
    {
        used[i] = true;
        memset(usedLocal, false, sizeof(usedLocal));
        usedLocal[i] = true;
        bfs(i, ans);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    return 0;
}
