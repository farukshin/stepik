#include <bits/stdc++.h>

using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 5 * 1e5 + 5;
const ll MOD = 1e9 + 7;

ll dp[MAX];

void solve()
{
    int n, k;
    string s;
    ll sum = 0;
    cin >> n >> k >> s;

    dp[0] = 1;
    sum = dp[0];
    for (int i = 1; i <= k; ++i)
    {
        dp[i] = (s[i - 1] == '1') ? 0 : sum;
        sum = (sum + dp[i]) % MOD;
    }

    for (int i = k + 1; i <= n; ++i)
    {
        sum = (MOD + sum - dp[i - k - 1]) % MOD;
        dp[i] = ((s[i - 1] == '1') ? 0 : sum);
        sum = (sum + dp[i]) % MOD;
    }

    cout << dp[n] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}