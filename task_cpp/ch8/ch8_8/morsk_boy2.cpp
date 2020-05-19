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
bool use[MAX][MAX];
int p1 = 0, p2 = 0;

void checkUse(int a, int b)
{

    use[a][b] == true;
    if (!use[a - 1][b] && mas[a - 1][b] == 1)
    {
        p2++;
        use[a - 1][b] = true;
    }
    else if (!use[a + 1][b] && mas[a + 1][b] == 1)
    {
        p2++;
        use[a + 1][b] = true;
    }
    else if (!use[a][b - 1] && mas[a][b - 1] == 1)
    {
        p2++;
        use[a][b - 1] = true;
    }
    else if (!use[a][b + 1] && mas[a][b + 1] == 1)
    {
        p2++;
        use[a][b + 1] = true;
    }
    else
        p1++;
}

void solve()
{
    for (int i = 1; i < MAX - 1; i++)
        for (int j = 1; j < MAX - 1; j++)
            cin >> mas[i][j];

    for (int i = 1; i < MAX - 1; i++)
        for (int j = 1; j < MAX - 1; j++)
            if (mas[i][j] == 1 && !use[i][j])
                checkUse(i, j);

    cout << p1 << " " << p2 << endl;
}

int main()
{
    ios_b;
    solve();
    return 0;
}