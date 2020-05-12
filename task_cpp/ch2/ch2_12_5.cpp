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
    int a2, b2;
    cin >> a2 >> b2;
    int a10 = a2 / 100 * 4 + (a2 / 10 % 10) * 2 + (a2 % 10);
    int b10 = b2 / 100 * 4 + (b2 / 10 % 10) * 2 + (b2 % 10);

    cout << a10 << " + " << b10 << " = " << a10 + b10 << endl;

    int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    if (a2 % 10 + b2 % 10 == 2)
        r3 = 1;
    r4 = (a2 % 10 + b2 % 10) % 2;

    if (a2 / 10 % 10 + b2 / 10 % 10 + r3 >= 2)
        r2 = 1;
    r3 = (a2 / 10 % 10 + b2 / 10 % 10 + r3) % 2;

    if (a2 / 100 + b2 / 100 + r2 >= 2)
        r1 = 1;
    r2 = (a2 / 100 + b2 / 100 + r2) % 2;

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
