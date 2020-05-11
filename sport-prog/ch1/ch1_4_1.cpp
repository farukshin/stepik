#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const ld EPS = 1e-17;
const int EXP = 5;
ld mas[EXP] = {0.0, 0.0, 0.0, 0.0, 0.0};

ld f(ld x)
{
    ld x2 = x * x;
    ld x3 = x2 * x;
    ld x4 = x3 * x;
    ld x5 = x4 * x;
    return x5 * mas[5] + x4 * mas[4] + x3 * mas[3] + x2 * mas[2] + x * mas[1] + mas[0];
}

void solve()
{
    cout.precision(16);
    int n;
    cin >> n;

    for (int i = EXP - n; i < EXP + 1; i++)
        cin >> mas[EXP - i];

    ld l = -50, r = 50;
    while (r - l > EPS)
    {
        ld mid = (r + l) / 2;
        if (f(mid) < 0.0)
            l = mid;
        else
            r = mid;
    }
    cout << (l + r) / 2 << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}