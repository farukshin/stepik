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
    int n = 0, MAXCHAR = 5, k;
    string s, sear;
    cin >> s >> sear;
    bool fl = true;

    for (int a = 0; a < MAXCHAR && fl; a++)
        for (int b = 0; b < MAXCHAR && fl; b++)
            for (int c = 0; c < MAXCHAR && fl; c++)
                for (int d = 0; d < MAXCHAR && fl; d++)
                {
                    n++;
                    if (s[a] == sear[0] && s[b] == sear[1] && s[c] == sear[2] && s[d] == sear[3])
                    {
                        cout << n << endl;
                        fl = false;
                    }
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
