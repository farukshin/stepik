#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const ll MAX = 1e18;

ll gcd(ll a, ll b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << ((a / gcd(a, b) <= MAX / b) ? (a / gcd(a, b) * b) : -1) << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
