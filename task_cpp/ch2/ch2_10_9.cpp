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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << e * 2 - b << " " << (e * 2 - b) * 2 - c << " " << ((e * 2 - b) * 2 - c) * 2 - d << endl;
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
