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
        if (cur % 10 % 2 && cur / 10 % 2)
            ans += cur;
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
