#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MOD = 1e6 + 3;

void solve()
{
    int n;
    cin >> n;
    int p1 = 1, p2 = 1, res = 1;
    while (--n)
    {
        res = (p1 + p2) % MOD;
        p2 = p1;
        p1 = res;
    }
    cout << res << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
