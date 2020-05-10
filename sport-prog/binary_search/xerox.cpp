#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;
ll MAX = 9223372036854775807;

ll paperNumber(ll x, ll y, ll t)
{
    return t / min(x, y) + (t - min(x, y)) / y;
}

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll l = 0, r = (max(x, y) * n) % MAX;

    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (paperNumber(x, y, mid) >= n)
            r = mid;
        else
            l = mid;
    }
    cout << r << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}