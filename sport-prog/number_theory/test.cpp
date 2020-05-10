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
    char n, p;
    n = 120;
    p = 10;
    cout << "n=" << n << endl;
    cout << "p=" << p << endl;
    n += p;
    cout << "n+=" << n << endl;
    cout << int(n) << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}