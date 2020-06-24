#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e6 + 5;
ll mas[MAXARR];
ll dp[MAXARR];

void solve()
{
    int n;
    cin >> n;

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    ll d1, d2, d3;

    for (int i = 4; i <= n; ++i)
    {
        d1 = (i % 2 == 0) ? dp[i / 2] : MAXARR;
        d2 = (i % 3 == 0) ? dp[i / 3] : MAXARR;
        d3 = dp[i - 1];
        dp[i] = min(min(d1, d2), d3) + 1;
    }
    cout << dp[n] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
