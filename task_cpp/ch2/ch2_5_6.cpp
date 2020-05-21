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
    int osn2 = 16, osn10 = 1000, i = 5;
    while (i--)
    {
        cout << a << " / " << osn2 << " % 2 = " << (a / osn2) % 2 << endl;
        osn2 /= 2;
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
