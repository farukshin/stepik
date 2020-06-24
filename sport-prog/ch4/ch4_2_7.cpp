// #tech_debt https://stepik.org/lesson/307331/step/10?unit=289419
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 505;
string color[MAX];
bool fl = false;
stack<int> st;

vector<vector<int>> ss(MAX, vector<int>());

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
    exit(0);
}

void dfs(int v)
{
    color[v] = "GREY";
    st.push(v);
    for (int u : ss[v])
    {
        if (color[u] == "GREY")
            print_cycles(u);

        if (color[u] == "WHITE")
            dfs(u);
    }
    color[v] = "BLACK";
    st.pop();
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
    }

    for (int i = 1; i <= n; i++)
        color[i] = "WHITE";

    for (int i = 1; i <= n; i++)
        if (color[i] == "WHITE")
            dfs(i);

    if (!fl)
        cout << "NO" << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
