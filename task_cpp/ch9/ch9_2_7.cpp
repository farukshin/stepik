//#tech_debt
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
    string s;
    cin >> s;
    char p = '1';
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << "p=" << p << " s[" << i << "]=" << s[i];
        if (p = '1')
        {
            if (s[i] == '1')
            {
                p = '1';
                s[i] = '0';
            }
            else if (s[i] == '0')
            {
                p = '0';
                s[i] = '1';
            }
        }
        cout << " s[" << i << "]=" << s[i] << endl;
    }

    if (p == '1')
        cout << p;

    cout << s << endl;
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
