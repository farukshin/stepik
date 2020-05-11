//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int paperNumber(int x, int y, int t)
{
    return t * max(x, y) + (t - 1) * min(x, y);
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int l = 1, r = max(x, y) * n, mid, preMid = -1;
    bool fl = true;

    while (r - l > 1)
    {
        mid = (l + r) / 2;
        //cout << "l=" << l << " r=" << r << " mid=" << mid << " paperNumber=" << paperNumber(x, y, mid) << endl;
        if (paperNumber(x, y, mid) >= n)
            r = mid;
        else
            l = mid;
    }
    mid = (l + r) / 2;
    if (paperNumber(x, y, mid) >= n)
        r = mid;
    cout << r << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
