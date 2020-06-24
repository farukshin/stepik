#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;

void solve()
{
    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int l = -1, r = n, ans = 0;
        cin >> k;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (mid >= k)
                r = mid;
            else
                l = mid;
            ans++;
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}
