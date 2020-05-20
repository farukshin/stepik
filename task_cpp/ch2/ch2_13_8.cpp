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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int osn1 = b * c, osn2 = c;
    int p = d / osn1 + (d % osn1 == 0 ? 0 : 1);
    d -= (p - 1) * osn1;
    int et = d / osn2 + (d % osn2 == 0 ? 0 : 1);

    cout << p << " " << et << endl;
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
