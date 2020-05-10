#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e5 + 5;
ll mas[MAXARR];
ll dp[MAXARR];

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> mas[i];

    dp[0] = 0;
    dp[1] = mas[1];

    for (int i = 2; i <= n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2]) + mas[i];

    cout << dp[n] << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}