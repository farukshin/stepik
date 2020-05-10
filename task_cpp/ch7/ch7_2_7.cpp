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
    int n = 0, MAXCHAR = 3, k;
    string s, sear;
    cin >> s >> k;
    bool fl = true;

    for (int a = 0; a < MAXCHAR && fl; a++)
        for (int b = 0; b < MAXCHAR && fl; b++)
            for (int c = 0; c < MAXCHAR && fl; c++)
                for (int d = 0; d < MAXCHAR && fl; d++)
                    for (int e = 0; e < MAXCHAR && fl; e++)
                    {
                        n++;
                        if (n <= 10)
                            cout << s[a] << s[b] << s[c] << s[d] << s[e] << endl;
                        else
                            fl = false;
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
