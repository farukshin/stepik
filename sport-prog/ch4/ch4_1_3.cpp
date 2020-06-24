// #tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 505;
vector<vector<int>> ss(MAX, vector<int>());

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
    {
        for (int j = 1; j <= n; j++)
            cout << (find(ss[i].begin(), ss[i].end(), j) == ss[i].end() ? "0" : "1");
        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}
