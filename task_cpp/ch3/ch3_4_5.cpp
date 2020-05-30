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
    bool ins = (x <= 2 && x >= 1 && y <= 3 && y >= -4) || (x <= 5 && x >= -4 && y <= 5 && y >= 4) || (x <= 0 && x >= -4 && y <= -1 && y >= -2);
    cout << (ins ? "Inside" : "Outside") << endl;
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
