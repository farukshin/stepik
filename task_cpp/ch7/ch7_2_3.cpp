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
    int n = 0, MAXCHAR = 4, k;
    string s, sear;
    cin >> s >> k;

    for (int a = 0; a < MAXCHAR; a++)
        for (int b = 0; b < MAXCHAR; b++)
            for (int c = 0; c < MAXCHAR; c++)
            {
                n++;
                if (k == n)
                    cout << s[a] << s[b] << s[c] << endl;
            }
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
