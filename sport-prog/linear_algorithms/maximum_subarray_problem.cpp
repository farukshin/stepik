#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef long long ll;

const int MaxArr = 300003;
ll mas[MaxArr];

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> mas[i];

    ll ans = mas[0], sum = 0, min = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += mas[i];
        ans = max(ans, sum);
        sum = max(sum, min);
    }

    cout << ans << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}