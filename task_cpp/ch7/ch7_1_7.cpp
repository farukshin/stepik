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
    for (int m = 1; m <= 9; m++)
        for (int u = 0; u <= 9; u++)
            if (m != u)
                for (int h = 0; h <= 9; h++)
                    if (m != h && u != h)
                        for (int a = 0; a <= 9; a++)
                            if (m != a && u != a && h != a)
                                for (int s = 1; s <= 9; s++)
                                    if (m != s && u != s && h != s && a != s)
                                        for (int l = 0; l <= 9; l++)
                                            if (m != l && u != l && h != l && a != l && s != l)
                                                for (int o = 0; o <= 9; o++)
                                                    if (m != o && u != o && h != o && a != o && s != o && l != o)
                                                        for (int n = 0; n <= 9; n++)
                                                            if (m != n && u != n && h != n && a != n && s != n && l != n && o != n)
                                                                if (2 * (1000 * m + 100 * u + 10 * h + a) == 1000 * s + 100 * l + 10 * o + n)
                                                                {
                                                                    k++;
                                                                    cout << k << ")"
                                                                         << "\t" << m << u << h << a << "+" << m << u << h << a << "=" << s << l << o << n << endl;
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
