#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int countCopy(int x, int y, int t)
{
    return t / x + abs(t - x) / y;
}

void solve()
{
    int x, y;
    int n;
    cin >> n >> x >> y;

    if (x > y)
        swap(x, y);

    unsigned int l = 0, r = n * (x + y);

    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (countCopy(x, y, mid) >= n)
            r = mid;
        else
            l = mid;
    }
    cout << r << endl;
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
