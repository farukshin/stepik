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
    int x, y;
    cin >> x >> y;
    int a, b, c, d;
    a = x + y;
    b = a * a - 3 * x * y;
    c = a + b - x * x + y * y;
    d = 5 * (a + b) * (c - 9) * (x - y);

    cout << a << endl
         << b << endl
         << c << endl
         << d << endl;
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
