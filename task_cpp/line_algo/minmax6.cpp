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
    const int MAX = 5;
    int i = MAX, arr[MAX];
    while (i--)
        cin >> arr[i];

    sort(arr, arr + MAX, greater<int>());

    for (auto r : arr)
        cout << r << " ";
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
