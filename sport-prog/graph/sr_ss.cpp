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
        cout << ss[i].size();
        sort(ss[i].begin(), ss[i].end());
        for (int k : ss[i])
            cout << " " << k;
        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}