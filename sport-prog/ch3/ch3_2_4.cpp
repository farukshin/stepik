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
    int n;
    string s;
    cin >> n >> s;

    dp[0] = 1;
    dp[1] = (s[0] != '0') ? 0 : dp[0];
    if (s.size() > 1)
        dp[2] = (s[1] != '0') ? 0 : dp[0] + dp[1];
    if (s.size() > 2)
        dp[3] = (s[2] != '0') ? 0 : dp[0] + dp[1] + dp[2];

    for (int i = 4; i <= n; ++i)
        dp[i] = ((s[i - 1] != '0') ? 0 : (((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD));

    cout << dp[n] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
