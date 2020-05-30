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
    int a, b, c;
    cin >> a >> b >> c;

    bool b1 = (a - b == 0);
    bool b2 = (a - c == 0);
    if (!b1 && !b2)
        cout << a << endl;
    else if (!b1 && b2)
        cout << b << endl;
    else if (b1 && !b2)
        cout << c << endl;
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
