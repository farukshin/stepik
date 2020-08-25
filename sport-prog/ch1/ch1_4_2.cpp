#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ld EPS = 1e-16;
const int EXP = 4;
ld mas[EXP + 1] = {0.0, 0.0, 0.0, 0.0, 0.0};

ld f(ld x, int cX, int cY)
{

    ld x2 = x * x;
    ld x3 = x2 * x;
    ld x4 = x3 * x;
    ld y = x4 * mas[4] + x3 * mas[3] + x2 * mas[2] + x * mas[1] + mas[0];

    return sqrt((cX - x) * (cX - x) + (cY - y) * (cY - y));
}

void solve()
{
    cout.precision(16);
    int cX, cY, cR, n, x;
    cin >> cX >> cY >> cR >> n;

    for (int i = n; i >= 0; i--)
        cin >> mas[i];

    cin >> x;

    ld l = 1.0 * x, r = l + 2 * cR;
    while (r - l > EPS)
    {
        ld mid = (r + l) / 2;
        //printf("l=%d r=%d mid=%d\n", l, r, mid);
        if (f(mid, cX, cY) < cR)
            l = mid;
        else
            r = mid;
    }
    cout << (l + r) / 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
