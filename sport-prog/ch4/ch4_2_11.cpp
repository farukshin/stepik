#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 1e5 + 5;
bool used[MAX] = {false};
int color[MAX] = {0};

set<pair<int, int>> st;

int ans[MAX] = {0};
int pos = 0;

vector<vector<int>> ss(MAX);
bool uniqTopolog = true;

void check(int node1, int node2)
{
    if (st.count({node1, node2}) == 0)
        uniqTopolog = false;
}

void dfs(int v)
{
    used[v] = true;
    for (int u : ss[v])
        if (!used[u])
            dfs(u);
    ans[pos] = v;
    pos--;
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
        st.insert({u, v});
    }

    for (int i = 1; i <= n; i++)
        if (!used[i])
            dfs(i);

    for (int i = 1; i < n && uniqTopolog; i++)
        check(ans[i], ans[i + 1]);

    cout << (uniqTopolog ? "YES" : "NO") << endl;
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
