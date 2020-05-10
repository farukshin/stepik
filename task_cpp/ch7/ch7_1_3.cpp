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
    for (int a = 1; a <= 9; a++)
        for (int b = 0; b <= 9; b++)
            for (int c = 0; c <= 9; c++)
                for (int d = 1; d <= 9; d++)
                    if (a != b && a != c && a != d && b != c && b != d && c != d)
                        if ((100 * a + 10 * b + c) * (10 * d + a) == 10000 * a + 1000 * a + 100 * a + 10 * a + a)
                            cout << a << b << c << "*" << d << a << "=" << a << a << a << a << a << endl;
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
