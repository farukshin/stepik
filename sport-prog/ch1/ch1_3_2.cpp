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

    int l = -1, r = n, mid;

    for (int i = 1; i <= m; i++)
    {
        cin >> k;
        mid = (l + r) / 2;
        if (k == 0)
            l = mid;
        else
            r = mid;
    }
    cout << r << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}