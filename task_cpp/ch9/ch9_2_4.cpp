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
    int k = 0;
    string cur;
    for (auto ch : s)
    {
        k++;
        cur += ch;
        if (k == 3)
        {
            if (cur == "000")
                cout << "0";
            else if (cur == "001")
                cout << "1";
            else if (cur == "010")
                cout << "2";
            else if (cur == "011")
                cout << "3";
            else if (cur == "100")
                cout << "4";
            else if (cur == "101")
                cout << "5";
            else if (cur == "110")
                cout << "6";
            else if (cur == "111")
                cout << "7";
            k = 0;
            cur = "";
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
