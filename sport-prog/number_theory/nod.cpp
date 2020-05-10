#include <bits/stdc++.h>

using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

void solve()
{

    int n = 0, m = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m = gcd(a, m);
    }
    cout << m << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}