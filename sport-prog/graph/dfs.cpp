#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 105;
bool used[MAX];
vector<vector<int>> ss(MAX, vector<int>());
queue<int> st;

void dfs(int v)
{
    used[v] = true;

    for (int u : ss[v])
    {

        if (used[u])
            continue;

        st.push(u);
        dfs(u);
        st.push(v);
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
    cin >> v;

    st.push(v);
    dfs(v);

    cout << st.size() << endl;
    if (!st.empty())
    {
        cout << st.front();
        st.pop();
    }

    while (!st.empty())
    {
        cout << " " << st.front();
        st.pop();
    }
    cout << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}