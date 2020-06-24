#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;

ll cur = 0, a = 0, b = 0, mod = 1791791791;
ll mas[10000001];

ll NextRand()
{
    cur = ((cur * a) % mod + b) % mod;
    return cur;
}

int solve()
{

    int n, max1, max2;
    ll buf = 0;

    cin >> n;
    cin >> cur >> a >> b;
    for (int i = 0; i < n; i++)
        mas[i] = NextRand();

    max1 = mas[0] >= mas[1] ? 0 : 1;
    max2 = mas[0] >= mas[1] ? 1 : 0;

    for (int i = 2; i < n; i++)
    {
        if (mas[i] > mas[max1])
        {
            buf = max1;
            max1 = i;
            if (mas[buf] > mas[max2])
                max2 = buf;
        }
        else if (mas[i] > mas[max2])
            max2 = i;
    }
    cout << max1 + 1 << " " << max2 + 1 << endl;

    return 0;
}

int main()
{
    ios_b;
    solve();
    return 0;
}
