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
    int x, a, b, c, d;
    cin >> x;
    a = x / 1000;
    b = x / 100 % 10;
    c = x / 10 % 10;
    d = x % 10;
    cout << a << " " << a << " " << b << " " << c << endl
         << a << " " << b << " " << c << " " << b << endl
         << b << " " << c << " " << b << " " << d << endl
         << c << " " << b << " " << d << " " << d << endl;
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
