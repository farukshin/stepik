#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

long binpow(long a, long n, long m)
{
    if (n == 0)
        return 1 % m;
    if (n % 2 == 1)
        return (binpow(a, n - 1, m) * a) % m;
    else
    {
        return binpow((a * a) % m, n / 2, m);
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    cout << binpow(n, n, m) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
