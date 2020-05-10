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
    int i = 5, ans = 0, cur;
    while (i--)
    {
        cin >> cur;
        int a1 = cur / 100;
        int a2 = cur % 100 / 10;
        int a3 = cur % 10;
        if (a1 < a2 && a2 < a3)
            ans++;
    }

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
