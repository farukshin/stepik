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
    int ans = 0, osn = 100, i = 3;
    while (i--)
    {
        cout << osn << "*" << a / osn << (osn != 1 ? " + " : "");
        a = a % osn;
        osn /= 10;
    }
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
