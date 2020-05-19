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
    int y3, x3, y4, x4;
    cin >> y1 >> x1 >> y2 >> x2;
    cin >> y3 >> x3 >> y4 >> x4;

    for (int i = 0; i < MAXX; i++)
    {
        for (int j = 0; j < MAXY; j++)

            if (i >= x1 && i <= x2 && j >= y1 && j <= y2)
            {
                if (i >= x3 && i <= x4 && j >= y3 && j <= y4)
                    cout << 3;
                else
                    cout << 1;
            }
            else if (i >= x3 && i <= x4 && j >= y3 && j <= y4)
                cout << 2;
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