#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int mas[8][8];

void solve()
{
    int x, y;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            cin >> mas[i][j];
            if (mas[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }

    for (int i = 0; i < 8; i++)
        if (i != x)
            mas[i][y] = 2;
    for (int j = 0; j < 8; j++)
        if (j != y)
            mas[x][j] = 2;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
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