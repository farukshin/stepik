// #tech_debt https://stepik.org/lesson/307331/step/13?unit=289419
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 505;
int color[MAX]; // {0, 1, 2}
vector<vector<int>> ss(MAX, vector<int>());
stack<int> st;

void dfs(int v)
{
    color[v] = 1;

    for (int u : ss[v])
    {
        if (color[u] == 1)
        {
            cout << "NO" << endl;
            exit(0);
        }

        if (color[u] == 0)
            dfs(u);
    }
    color[v] = 2;
    st.push(v);
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
    for (int i = 1; i <= m; i++)
        color[i] = 0;

    for (int i = 1; i <= m; i++)
        if (!color[i])
            dfs(i);

    cout << "YES" << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
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