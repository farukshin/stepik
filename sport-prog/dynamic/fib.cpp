#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 93;
ll dp[MAXARR];

void solve()
{
    int n;
    cin >> n;

    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i <= n; ++i)
        dp[i] = dp[i - 1] + dp[i - 2];

    cout << dp[n] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}