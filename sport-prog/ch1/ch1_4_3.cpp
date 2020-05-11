#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

ll diplomasNumber(ll w, ll h, ll len)
{
    return (len / w) * (len / h);
}

void solve()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0, r = max(w, h) * n;

    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (diplomasNumber(w, h, mid) >= n)
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