#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<pair<int, int>> sr;

void solve()
{
    int n;
    string s;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        cin >> s;
        for (int i = 0; i < n; i++)
            if (s[i] == '1' && k < i + 1)
                sr.push_back({k, i + 1});
    }

    sort(sr.begin(), sr.end());
    cout << sr.size() << endl;
    for (int i = 0; i < sr.size(); i++)
        cout << sr[i].first << " " << sr[i].second << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}