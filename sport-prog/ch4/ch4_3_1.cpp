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
int used[MAX];
queue<int> q, ans;

void dfs(int v)
{
    q.push(v);
    ans.push(v);
    used[v] = true;

    while (!q.empty())
    {
        v = q.front();
        q.pop();
        for (int u : ss[v])
        {
            if (used[u])
                continue;
            used[u] = true;
            q.push(u);
            ans.push(u);
        }
    }
}

void print_ans()
{
    cout << ans.front();
    ans.pop();
    while (!ans.empty())
    {
        cout << " " << ans.front();
        ans.pop();
    }
    cout << endl;
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

    cin >> v;
    dfs(v);

    print_ans();
}

int main()
{
    ios_b;
    solve();
    return 0;
}
