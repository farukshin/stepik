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
    stack<int> st;
    int n, osn = 6;
    cin >> n;
    st.push(n % osn);
    while (n)
    {
        if (n / osn)
            st.push((n / osn) % osn);
        n /= osn;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
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
