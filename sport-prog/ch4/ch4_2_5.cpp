// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 505;
vector<pair<int, int>> sr;
int mver[MAX] = {0};

void solve()
{
    int n, m;
    cin >> n >> m;
    sr.resize(m + 5, {0, 0});

    for (int i = 1; i <= m; i++)
        cin >> sr[i].first >> sr[i].second;

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int cur;
        cin >> cur;
        mver[sr[cur].first]++;
        mver[sr[cur].second]++;
    }

    bool fl = true;
    int k1 = 0, k2 = 0;
    for (int i = 1; i <= n && fl; i++)
        if (mver[i] == 2)
            k2++;
        else if (mver[i] == 1)
            k1++;

    if (n > 1)
        fl = k2 == n - 2 && k1 == 2;
    else if (n == 1 && q > 0)
        fl = false;

    cout << (fl ? "YES" : "NO") << endl;
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
