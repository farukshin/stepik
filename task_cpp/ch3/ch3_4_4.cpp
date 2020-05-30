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
    double x, y;
    cin >> x >> y;
    cout << ((x <= 5 && x >= 1 && y <= 5 && y >= 2) || (x <= -1 && x >= -5 && y <= 6 && y >= 4) ? "Inside" : "Outside") << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}
