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
    int min = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (min)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
                min = 0;
            }
            else
                s[i] = '1';
        }
    }
    if (s == "0")
        cout << s;
    else
    {
        bool fl = false;
        for (auto ch : s)
        {
            if (ch == '1' && !fl)
                fl = true;
            if (fl || ch == '1')
                cout << ch;
        }
    }
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
