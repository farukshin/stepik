#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e5 + 5;
const ll MIN = -1e9 - 5;
ll mas[MAXARR];
ll dp[MAXARR];
vector<int> ans;

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> mas[i];

    dp[0] = 0;
    dp[1] = mas[1];
    dp[2] = dp[1] + mas[2];
    dp[3] = max(dp[0], dp[2]) + mas[3];
    dp[4] = max(dp[1], dp[3]) + mas[4];

    for (int i = 5; i <= n; ++i)
        dp[i] = max(max(dp[i - 5], dp[i - 3]), dp[i - 1]) + mas[i];

    int x;
    x = n;

    while (x > 0)
    {
        ans.push_back(x);
        if (dp[x - 5] + mas[x] == dp[x])
            x -= 5;

        else if (dp[x - 3] + mas[x] == dp[x])
            x -= 3;

        else
            x -= 1;
    }

    cout << dp[n] << " " << ans.size() << endl;
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}