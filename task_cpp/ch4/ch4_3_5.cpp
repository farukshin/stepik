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
    int a, b, k = 0, ans = 0;
    cin >> a >> b;

    for (int i = 1; i <= min(a, b); i++)
        if (a % i == 0 && b % i == 0 && i > ans)
            ans = i;

    if (a / b > 0)
        cout << a / b << " ";

    if (a % b != 0)
        cout << (a % b) / ans << "/" << b / ans;
    cout << endl;
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
