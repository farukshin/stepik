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
    int k = 0;
    for (int t = 1; t <= 9; t++)
        for (int r = 0; r <= 9; r++)
            if (t != r)
                for (int i = 0; i <= 9; i++)
                    if (t != i && r != i)
                        for (int d = 1; d <= 9; d++)
                            if (t != d && r != d && i != d)
                                for (int v = 0; v <= 9; v++)
                                    if (t != v && r != v && i != v && d != v)
                                        for (int a = 0; a <= 9; a++)
                                            if (t != a && r != a && i != a && d != a && v != a)
                                                for (int p = 1; p <= 9; p++)
                                                    if (t != p && r != p && i != p && d != p && v != p && a != p)
                                                        for (int y = 0; y <= 9; y++)
                                                            if (t != y && r != y && i != y && d != y && v != y && a != y & p != y)
                                                                for (int q = 0; q <= 9; q++)
                                                                    if (t != q && r != q && i != q && d != q && v != q && a != q & p != q && y != q)
                                                                        if (100 * t + 10 * r + i + 100 * d + 10 * v + a == 1000 * p + 100 * y + 10 * t + q)
                                                                        {
                                                                            k++;
                                                                            cout << k << ")"
                                                                                 << "\t" << t << r << i << "+" << d << v << a << "=" << p << y << t << q << endl;
                                                                        }
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
