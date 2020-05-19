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

void check_kon(int a, int b)
{
    if (a >= 0 && a < MAX && b >= 0 && b < MAX)
        mas[a][b] = 2;
}

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

    check_kon(x - 2, y - 1);
    check_kon(x - 1, y - 2);
    check_kon(x + 2, y - 1);
    check_kon(x + 1, y - 2);
    check_kon(x + 2, y + 1);
    check_kon(x + 1, y + 2);
    check_kon(x - 2, y + 1);
    check_kon(x - 1, y + 2);

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