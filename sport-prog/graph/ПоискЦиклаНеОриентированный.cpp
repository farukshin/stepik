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
int k = 0;
vector<vector<int>> ss(MAX, vector<int>());
stack<int> st;

void print_cycles(int u)
{
    int cur;
    stack<int> ans;
    while (!st.empty())
    {
        ans.push(st.top());
        if (st.top() == u)
            break;
        st.pop();
    }

    cout << "YES" << endl
         << ans.size() << endl;
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;
}

void dfs(int v, int p = -1)
{
    used[v] = true;
    st.push(v);
    for (int u : ss[v])
    {
        if (!used[u])
        {
            k--;
            dfs(u, v);
        }
        else if (u != p)
        {
            print_cycles(u);
            exit(0);
        }
    }
    st.pop();
}

void solve()
{
    int n, m;
    int u, v;
    cin >> n >> m;
    k = m;

    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        ss[u].push_back(v);
        ss[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        if (!used[i])
            dfs(i);

    if (k == 0)
        cout << "NO" << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}