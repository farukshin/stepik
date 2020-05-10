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
    int i = 5, cur, ansCount = 3, fib1, fib2;
    while (i--)
    {
        cin >> cur;
        if (i == 4)
            fib1 = cur;
        else if (i == 3)
        {
            fib1 = (fib1 - cur) * -1;
            fib2 = cur;
        }
        else if (i == 2)
            fib2 = (fib2 - cur) * -1;
        else
        {
            fib2 = fib1 + fib2;
            fib1 = fib2 - fib1;
        }
    }

    while (ansCount--)
    {
        cur += fib1 + fib2;
        cout << cur << " ";
        fib2 = fib1 + fib2;
        fib1 = fib2 - fib1;
    }
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
