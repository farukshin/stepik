#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int a = 0, b = 0, res = 0;

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);

    if (b == 0)
        return a;

    res++;
    return gcd(b, a % b);
}

void solve()
{
    cin >> a >> b;
    int i = gcd(a, b);
    cout << res << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
