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
    ld a, b, c;
    cin >> a >> b >> c;
    ld osn = a * (b + c) + b * c;
    ld res = (a * b * c) / osn;
    cout << long(res) << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}