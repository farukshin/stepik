//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int movFormat(int inp, int out, string num) {

    int k = 1;
    int res = 0;
    for (int i = num.length() - 1; i >= 0; i--)
    {
        res += (num[i] - '0') * k;
        k *= inp;
    }
    if (out == 10)
        return res;

    k = 1;
    while (k <= res)
        k *= out;

    int ans = 0;
    int k10 = 1;
    while (res) {
        ans = ans * 10 + (res / k);
        res -= (res / k) * k;
        k /= out;
    }
    while (k == 1) {
        ans *= 10;
        k /= out;
    }

    return ans;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int a10 = movFormat(8, 10, a);


    printf("%d\n%d\n", a10, movFormat(10, 2, to_string(a10)));
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
