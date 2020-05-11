#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int NOD(int n1, int n2)
{
    int div;
    if (n1 == n2)
        return n1;
    int d = n1 - n2;
    if (d < 0)
    {
        d = -d;
        div = NOD(n1, d);
    }
    else
        div = NOD(n2, d);
    return div;
}

int NOK(int n1, int n2)
{
    return n1 * n2 / NOD(n1, n2);
}

void solve()
{
    int a, b;
    cin >> a >> b;

    cout << NOK(a, b) << endl;
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
