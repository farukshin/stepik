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

    for (auto ch : s)
        if (ch == '0')
            cout << "000";
        else if (ch == '1')
            cout << "001";
        else if (ch == '2')
            cout << "010";
        else if (ch == '3')
            cout << "011";
        else if (ch == '4')
            cout << "100";
        else if (ch == '5')
            cout << "101";
        else if (ch == '6')
            cout << "110";
        else if (ch == '7')
            cout << "111";

    cout << endl;
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
