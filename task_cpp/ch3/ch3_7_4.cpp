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
    bool fl = (y <= 3 * x / 2 + 1) && (y <= -3 * x / 2 + 7) && (y >= -2 * x / 4 + 1 || y >= 2 * x / 4 - 1);
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
