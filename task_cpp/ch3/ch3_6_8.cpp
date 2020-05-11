#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    ld x, y;
    cin >> x >> y;
    if (x < 0)
        x *= -1;

    bool fl = x * x + y * y <= 6 * 6 && !((x - 2) * (x - 2) + (y - 2) * (y - 2) < 1) && !(x * x + (y + 3) * (y + 3) < 2 * 2);
    cout << (fl ? "Inside" : "Outside") << endl;
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
