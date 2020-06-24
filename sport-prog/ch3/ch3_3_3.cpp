#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 101;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> mas(n + 1, vector<int>(n + 1));
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        int b = i;

        while (b >= 1)
        {
            cin >> mas[a][b];
            a++;
            b--;
        }
    }

    dp[1][1] = mas[1][1];

    for (int i = 2; i <= n; i++)
    {
        dp[1][i] = mas[1][i] + dp[1][i - 1];
        dp[i][1] = mas[i][1] + dp[i - 1][1];
    }

    for (int i = 2; i <= n - 1; i++)
        for (int j = 2; j <= n - 1; j++)
            if (i + j <= n + 1)
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + mas[i][j];

    ll res;
    res = dp[1][n];
    int i = 2;
    int j = n - 1;
    while (i <= n && j >= 1)
    {
        res = max(res, dp[i][j]);
        i++;
        j--;
    }

    cout << res << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
