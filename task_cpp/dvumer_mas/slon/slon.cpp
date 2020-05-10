#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 8;
int mas[MAX][MAX];

void solve()
{
    int x, y;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
        {
            cin >> mas[i][j];
            if (mas[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    bool fl = true;
    int r = 1;
    while (fl)
    {
        fl = false;
        if (x - r >= 0 && y - r >= 0)
        {
            mas[x - r][y - r] = 2;
            fl = true;
        }
        if (x - r >= 0 && y + r < MAX)
        {
            mas[x - r][y + r] = 2;
            fl = true;
        }
        if (x + r < MAX && y - r >= 0)
        {
            mas[x + r][y - r] = 2;
            fl = true;
        }
        if (x + r < MAX && y + r < MAX)
        {
            mas[x + r][y + r] = 2;
            fl = true;
        }
        r++;
    }
    
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
            cout << mas[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}