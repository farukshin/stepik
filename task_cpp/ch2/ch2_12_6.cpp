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
    int a3, b3, osn = 3;
    cin >> a3 >> b3;
    int a10 = a3 / 100 * osn * osn + (a3 / 10 % 10) * osn + (a3 % 10);
    int b10 = b3 / 100 * osn * osn + (b3 / 10 % 10) * osn + (b3 % 10);

    cout << a10 << " + " << b10 << " = " << a10 + b10 << endl;

    int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    r3 = (a3 % 10 + b3 % 10) / osn;
    r4 = (a3 % 10 + b3 % 10) % osn;

    r2 = (a3 / 10 % 10 + b3 / 10 % 10 + r3) / osn;
    r3 = (a3 / 10 % 10 + b3 / 10 % 10 + r3) % osn;

    r1 = (a3 / 100 + b3 / 100 + r2) / osn;
    r2 = (a3 / 100 + b3 / 100 + r2) % osn;

    cout << r1 * 1000 + r2 * 100 + r3 * 10 + r4 << endl;
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
