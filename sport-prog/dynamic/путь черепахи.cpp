#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MOD = 1e9 + 9;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mas(n + 1, vector<int>(m + 1));
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> mas[i][j];

    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (mas[i][j] == 1)
                dp[i][j] = 0;
            else
                dp[i][j] = ((dp[i - 1][j] + dp[i][j - 1]) % MOD + dp[i - 1][j - 1]) % MOD;
        }

    cout << dp[n][m] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}