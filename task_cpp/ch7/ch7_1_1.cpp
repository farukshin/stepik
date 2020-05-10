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
    for (int i = 1; i <= 9; i++)
        for (int k = 1; k <= 9; k++)
            for (int s = 0; s <= 9; s++)
                if (i != k && i != s && k != s)
                    if (100 * i + 10 * k + s + 100 * i + 10 * s + k == 100 * k + 10 * s + i)
                        cout << i << k << s << "+" << i << s << k << "=" << k << s << i << endl;
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
