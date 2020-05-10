#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;

const int MAXARR = 200005;
int mas[MAXARR];

void solve()
{
    int n, m, mid;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < m; i++)
    {
        int l = -1, r = n, cur;
        cin >> cur;
        while (l + 1 < r)
        {
            mid = (l + r) / 2;
            if (mas[mid] <= cur)
                r = mid;
            else
                l = mid;
        }
        cout << (r < n ? to_string(r + 1) : "NO SOLUTION") << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}