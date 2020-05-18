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
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() > s2.size())
        cout << s1 << endl
             << s2 << endl;
    else if (s2.size() > s1.size())
        cout << s2 << endl
             << s1 << endl;
    else
    {
        bool stop = false;
        for (int i = 0; i < s1.size() && !stop; i++)
            if (s1[i] != s2[i])
            {
                stop = true;
                if (s1[i] == '1')
                    cout << s1 << endl
                         << s2 << endl;
                else
                    cout << s2 << endl
                         << s1 << endl;
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
