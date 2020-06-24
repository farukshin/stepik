#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int N = 1000000000;

void solve()
{

    ll n = 0;
    int res = 1;
    cin >> n;
    if (n == 2 || n == 3)
        res = 1;
    else
        for (int i = 2; (long long)i * i <= n; i++)
            if (n % i == 0)
            {
                res = 0;
                continue;
            }

    cout << res << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
