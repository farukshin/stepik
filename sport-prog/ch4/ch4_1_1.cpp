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
    int n;
    string s;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        cin >> s;
        vector<int> sp;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                sp.push_back(i + 1);

        cout << sp.size();
        for (int r : sp)
            cout << " " << r;
        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}
