#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<int> arr;

int countKorov(int t, int n)
{
    int count = 0, cur = -1e9 - 5;
    for (int i = 0; i < n; i++)
        if (arr[i] - cur >= t)
        {
            cur = arr[i];
            count++;
        }
    return count;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    arr.resize(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = 1e9 + 5;

    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (countKorov(mid, n) < k)
            r = mid;
        else
            l = mid;
    }
    cout << l << endl;
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
