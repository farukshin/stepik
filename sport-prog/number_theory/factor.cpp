// #tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MOD = 1e6 + 3;

void solve()
{
    ll n;
    cin >> n;
    ll res = n % MOD;
    while (--n)
    {
        res = (res * (n % MOD)) % MOD;
    }
    cout << res << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}