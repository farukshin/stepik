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
    int a1, a2, a3, a4;
    a1 = a / 1000;
    a2 = a / 100 % 10;
    a3 = a / 10 % 10;
    a4 = a % 10;

    if (a1 < a2 && a2 < a3 && a3 < a4)
        cout << -22 << endl;
    else
        cout << 22 << endl;
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
