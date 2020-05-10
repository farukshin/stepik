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
    int a, b;
    cin >> a >> b;
    cout << a * 1024 * 8 + b * 1024 * 1024 * 8 << " bit" << endl
         << a * 1024 + b * 1024 * 1024 << " Byte" << endl
         << a * 8 + b * 1024 * 8 << " Kbit" << endl;
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
