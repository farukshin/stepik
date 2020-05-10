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
    int osn1 = 1024 * 8, osn2 = 8;
    int k1 = a / osn1;
    int k2 = (a - osn1 * k1) / osn2;

    cout << k1 << " KB" << endl
         << k2 << " B" << endl;
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
