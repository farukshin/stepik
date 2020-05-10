#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MOD = 1e6 + 7;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll res = (((a * a) % MOD - (b * b) % MOD) + MOD) % MOD;
    cout << res << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}