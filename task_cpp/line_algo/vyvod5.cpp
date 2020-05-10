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
    int a, ans = 0;
    cin >> a;
    int osn2 = 8, osn10 = 1000, i=4;
    while (i--)
    {
        cout << osn2 << "*" << a / osn10 << (i ? " + " : "");
        ans += osn2 * a / osn10;
        a = a % osn10;
        osn2 /= 2;
        osn10 /= 10;
    }
    cout << " = " << ans << endl;
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
