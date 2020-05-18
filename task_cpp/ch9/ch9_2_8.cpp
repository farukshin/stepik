//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

string ltrim(string s, char ch)
{
    int i = 0, j;
    while (s[i] == ch)
    {
        i++;
    }
    string ans = "";
    if (i > 0)
        for (j = 0; j < s.size(); j++)
            ans += s[j + i];
    else
        ans = s;

    return ans;
}

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

    cout << ltrim(s, '0') << endl;
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
