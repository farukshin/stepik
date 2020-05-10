// #tech_debt

#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const ll MOD = 1e9 + 123;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> dp(n + 3, vector<int>(m + 3, 0));

    dp[0][1] = 1;
    int mx = max(n + 1, m + 1);
    for (int t = 2; t <= mx; t++)
    {
        for (int i = 2; i <= t; i++)
            dp[i][t] = ((dp[i - 2][t + 1] + dp[i - 2][t - 1]) % MOD + (dp[i - 1][t - 2] + dp[i + 1][t - 2]) % MOD) % MOD;

        for (int i = 2; i <= t; i++)
            dp[t][i] = ((dp[t - 2][i + 1] + dp[t - 2][i - 1]) % MOD + (dp[t - 1][i - 2] + dp[t + 1][i - 2]) % MOD) % MOD;
    }

    // for (int i = 2; i <= n + 1; i++)
    // {
    //     int a = 2;
    //     for (int b = i; b >= 2; b--)
    //     {
    //         dp[a][b] = ((dp[a - 2][b + 1] + dp[a - 2][b - 1]) % MOD + (dp[a - 1][b - 2] + dp[a + 1][b - 2]) % MOD) % MOD;
    //         a++;
    //     }
    // }

    // for (int i = 3; i <= m + 1; i++)
    // {
    //     int a = 3;
    //     for (int b = n + 1; b >= 2; b--)
    //     {
    //         if (a + b <= n + 1)
    //             dp[a][b] = ((dp[a - 2][b + 1] + dp[a - 2][b - 1]) % MOD + (dp[a - 1][b - 2] + dp[a + 1][b - 2]) % MOD) % MOD;
    //         a++;
    //     }
    // }

    cout << "dp:" << endl;
    for (int i = 2; i <= n + 1; ++i)
    {
        for (int j = 2; j <= m + 1; ++j)
            cout << dp[i][j] << " ";
        cout << endl;
    }

    cout << dp[n + 1][m + 1] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}