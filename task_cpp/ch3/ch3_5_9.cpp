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
    bool fl = y <= x && y <= -x + 5 && y >= 0 || y >= x && y >= -x + 5 && y <= 5;
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
