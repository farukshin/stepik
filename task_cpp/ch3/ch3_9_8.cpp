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
    const int MAXARR = 5;
    int i = MAXARR, arr[MAXARR], min, ans = 0;
    for (int i = 0; i < MAXARR; i++)
    {
        cin >> arr[i];
        if (i == 0)
            min = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    for (int i = 0; i < MAXARR; i++)
        if (arr[i] == min)
            ans++;

    cout << ans << " ";
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}
