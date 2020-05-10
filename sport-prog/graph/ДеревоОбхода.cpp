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
vector<vector<int>> ss(MAX, vector<int>());
vector<pair<int, int>> sr;
vector<int> dr;
vector<pair<int, int>>::iterator it;
pair<int, int> p;

int iter(int u, int v)
{
    p = {min(u, v), max(u, v)};
    it = find(sr.begin(), sr.end(), p);
    if (it != sr.end())
        return distance(sr.begin(), it) + 1;
    else
        return 0;
}

void dfs(int v)
{
    used[v] = true;
    for (int u : ss[v])
    {
        if (used[u])
            continue;

        dr.push_back(iter(v, u));
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
        p = {min(u, v), max(u, v)};
        sr.push_back(p);
    }

    dfs(1);

    cout << dr.size() << endl;
    for (int p : dr)
        cout << p << " ";
}

int main()
{
    ios_b;
    solve();
    return 0;
}