#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAX = 12;
int mas[MAX][MAX];
int res[MAX][MAX];

void checkUse(int a, int b, int r)
{
    res[a][b] = 9;
    for (int i = max(0, a - 1); i <= min(a + 1, MAX); i++)
    {
        if (mas[i][b - 1] != 9)
            res[i][b - 1]++;
        if (mas[i][b + 1] != 9)
            res[i][b + 1]++;
    }
    if (mas[a - 1][b] != 9)
        res[a - 1][b]++;
    if (mas[a + 1][b] != 9)
        res[a + 1][b]++;
}

void solve()
{
    for (int i = 1; i < MAX - 1; i++)
        for (int j = 1; j < MAX - 1; j++)
        {
            cin >> mas[i][j];
            if (mas[i][j] == 9)
            {
                checkUse(i, j, 1);
            }
        }

    for (int i = 1; i < MAX - 1; i++)
    {
        for (int j = 1; j < MAX - 1; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}