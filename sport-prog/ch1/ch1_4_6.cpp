#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<ll> arr;

int countForD(ll t, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        count += arr[i] / t;

    return count;
}

void solve()
{
    int n, k;
    ll sum = 0;
    cin >> n >> k;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < k)
    {
        cout << 0 << endl;
        return;
    }

    ll l = 0, r = ceil(1.0 * sum / k) + 1;

    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        //printf("l=%d r=%d mid=%d\n", l, r, mid);
        if (countForD(mid, n) < k)
            r = mid;
        else
            l = mid;
    }
    cout << l << endl;
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
