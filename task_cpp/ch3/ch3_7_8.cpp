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

    bool fl = (y <= 5 && y >= -8 * x / 3 - 3 && y >= 8 * x / 3 - 3 && !(x * x + (y - 3) * (y - 3) < 1 * 1)) || ((x - 5) * (x - 5) + y * y <= 2 * 2 && y <= 0);
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
