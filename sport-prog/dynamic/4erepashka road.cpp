#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mas(n + 1, vector<int>(m + 1));
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    vector<pair<int, int>> ans;
    int x = n, y = m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> mas[i][j];

    dp[1][1] = mas[1][1];

    for (int j = 1; j <= m; ++j)
        dp[1][j] = dp[1][j - 1] + mas[1][j];

    for (int i = 1; i <= n; ++i)
        dp[i][1] = dp[i - 1][1] + mas[i][1];

    for (int i = 2; i <= n; ++i)
        for (int j = 2; j <= m; ++j)
            dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + mas[i][j];

    while (x > 0 && y > 0)
    {
        ans.push_back({x, y});
        if (dp[x - 1][y] + mas[x][y] == dp[x][y])
            x -= 1;
        else if (dp[x][y - 1] + mas[x][y] == dp[x][y])
            y -= 1;
        else
        {
            x -= 1;
            y -= 1;
        }
    }

    cout << dp[n][m] << " " << ans.size() << endl;
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i].first << " " << ans[i].second << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}