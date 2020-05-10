// #tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MOD = 1e6 + 3;

int factmod(int n, int m)
{
    if (n >= m)
        return 0;

    int res = 1;
    while (n > 1)
    {
        res = (res * ((n / m) % 2 ? m - 1 : 1)) % m;
        for (int i = 2; i <= n % m; i++)
            res = (res * i) % m;
        n /= m;
    }
    return res % m;
}

void solve()
{
    int n, res = 1;
    cin >> n;
    cout << factmod(n, MOD) << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}