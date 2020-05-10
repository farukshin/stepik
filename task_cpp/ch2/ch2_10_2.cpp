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
    int x, a, b, c;
    cin >> x;
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    cout << a << a << b << b << c << c << endl;
    cout << a << a << b << b << c << c << endl;
    cout << a << a << b << b << c << c << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
