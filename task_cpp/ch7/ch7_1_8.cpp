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
    for (int v = 1; v <= 9; v++)
        for (int o = 0; o <= 9; o++)
            if (v != o)
                for (int l = 0; l <= 9; l++)
                    if (v != l && o != l)
                        for (int f = 1; f <= 9; f++)
                            if (v != f && o != f && l != f)
                                for (int i = 0; i <= 9; i++)
                                    if (v != i && o != i && l != i && f != i)
                                        for (int a = 0; a <= 9; a++)
                                            if (v != a && o != a && l != a && f != a && i != a)
                                                for (int t = 0; t <= 9; t++)
                                                    if (v != t && o != t && l != t && f != t && i != t && a != t)
                                                        for (int m = 1; m <= 9; m++)
                                                            if (v != m && o != m && l != m && f != m && i != m && a != m && t != m)
                                                                for (int r = 0; r <= 9; r++)
                                                                    if (v != r && o != r && l != r && f != r && i != r && a != r && t != r && m != r)
                                                                        if (10000 * v + 1000 * o + 100 * l + 10 * v + o + 1000 * f + 100 * i + 10 * a + t == 10000 * m + 1000 * o + 100 * t + 10 * o + r)
                                                                        {
                                                                            k++;
                                                                            cout << k << ")"
                                                                                 << "\t" << v << o << l << v << o << "+" << f << i << a << t << "=" << m << o << t << o << r << endl;
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
