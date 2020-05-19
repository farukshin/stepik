#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXX = 10;
const int MAXY = 30;
int mas[MAXX][MAXY];

void solve()
{
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;

    for (int i = 0; i < MAXX; i++)
    {
        for (int j = 0; j < MAXY; j++)
            if (i >= x1 && i <= x2 && j >= y1 && j <= y2)
                cout << 1;
            else
                cout << 0;

        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}