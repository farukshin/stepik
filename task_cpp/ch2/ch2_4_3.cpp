//#tech_debt
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
    int a;
    cin >> a;
    int MOD = 16;
    int a1 = a / 100;
    int a2 = a / 10 % 10;
    int a3 = a % 10;
    int s = a1 + a2 + a3;
    int ans = 100 * (a3 + s) + 10 * (a2 + s) + a1 + s;
    cout << ans << endl;
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
