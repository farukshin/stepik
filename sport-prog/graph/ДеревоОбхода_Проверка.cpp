// #tech_debt https://stepik.org/lesson/307331/step/7?unit=289419
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 505;
vector<pair<int, int>> sr;
int mver[MAX];

void solve()
{
    int n, m, q;
    int u, v;
    pair<int, int> p;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        p = {u, v};
        sr.push_back(p);
    }

    for (int i = 1; i <= n; i++)
        mver[i] = 0;

    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        cin >> u;
        mver[sr[u - 1].first]++;
        mver[sr[u - 1].second]++;
    }

    // for (int i = 1; i <= n; i++)
    //     cout << mver[i] << " ";
    // cout << endl;

    int k1 = 0;
    bool fl = true;

    if (n <= 3)
    {
        if (m != (n - 1))
            fl = false;
    }
    else

        for (int i = 1; i <= n; i++)
            if (mver[i] == 2)
                continue;
            else if (mver[i] == 1 && k1 <= 1)
                k1++;
            else
            {
                fl = false;
                break;
            }

    cout << (fl == true ? "YES" : "NO") << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}