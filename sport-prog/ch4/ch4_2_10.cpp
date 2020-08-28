#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 2e5 + 5;
bool used[MAX] = {false};

int ans[MAX] = {0};

vector<vector<int>> ss(MAX), obr(MAX);
bool success = true;

void check(int v)
{
    for (int u : obr[v])
        if (!used[u])
            success = false;
    used[v] = true;
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
        obr[v].push_back(u);
        if (u == v)
            success = false;
    }

    for (int i = 1; i <= n; i++)
        cin >> ans[i];

    for (int i = 1; i <= n && success; i++)
        check(ans[i]);

    cout << (success ? "YES" : "NO") << endl;
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
