#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 1005;
int n, m;
char ans[MAX][MAX] = {' '};

void getSteps(pair<int, int> start, vector<pair<int, int>> &steps)
{
    int x, y;
    pair<int, int> run[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (auto r : run)
    {
        x = start.first, y = start.second;

        while (true)
        {
            char ch = ans[x + r.first][y + r.second];
            if (ch == ' ' || ch == 'S' || ch == 'D')
                x += r.first, y += r.second;
            else
                break;
        }
        steps.push_back({x, y});
    }
}

bool bfs(pair<int, int> start, pair<int, int> finish)
{
    queue<pair<int, int>> que;
    que.push({start.first, start.second});

    bool used[MAX][MAX] = {false};
    used[start.first][start.second] = true;

    while (!que.empty())
    {
        auto cur = que.front();
        que.pop();

        if (cur.first == finish.first && cur.second == finish.second)
            return true;

        vector<pair<int, int>> steps;
        getSteps(cur, steps);

        for (auto r : steps)
            if (!used[r.first][r.second])
            {
                used[r.first][r.second] = true;
                que.push({r.first, r.second});
            }
    }

    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    char ans[2 * n + 1][2 * m + 1] = {' '};
    bool used[n + 2][m + 2] = {false};

    pair<int, int> stock;
    vector<pair<int, int>> d;

    string s;
    getline(cin, s);
    for (int i = 0; i < 2 * n + 1; i++)
    {
        getline(cin, s);
        for (int j = 0; j < 2 * m + 1; j++)
        {
            ans[i][j] = s[j];
            if (s[j] == 'S')
                stock = {i, j};
            if (s[j] == 'D')
                d.push_back({i, j});
        }
    }

    for (auto ut : d)
        if (!bfs(ut, stock))
            //ans[ut.first][ut.second] = ' ';
            ;

    for (int i = 0; i < 2 * n + 1; i++)
    {
        for (int j = 0; j < 2 * m + 1; j++)
            cout << ans[i][j];
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    return 0;
}
