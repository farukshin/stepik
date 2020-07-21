// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 1005;
vector<vector<int>> ss(MAX, vector<int>());
int used[MAX];
queue<pair<int, int>> q;
int n, m, ans = 0;

void dfs(pair<int, int> v)
{
    q.push(v);
    int d[MAX] = {0};
    bool usedLocal[MAX];
    int curD = 0;

    while (!q.empty())
    {
        v = q.front();
        q.pop();
        curD++;
        for (int chield : ss[v.first])
        {
            if (usedLocal[chield])
                continue;

            usedLocal[chield] = true;
            q.push({chield, v.second + 1});
            d[chield] = curD;
        }
    }

    for (int i = 1; i <= n; i++)
        ans += used[i] * d[i];
}

void solve()
{

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ss[u].push_back(v);
        ss[v].push_back(u);
    }

    memset(used, 1, sizeof(used));

    for (int i = 1; i <= n; i++)
    {
        used[i] = 0;
        dfs({i, 0});
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
