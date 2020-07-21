#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 105;

int p, q, n, m;

struct step
{
    int x;
    int y;
    int d;
};

int bfs(pair<int, int> start, pair<int, int> finish)
{
    queue<step> que;
    que.push({start.first, start.second, 0});

    pair<int, int> run[8] = {{p, -q}, {p, q}, {-p, -q}, {-p, q}, {q, p}, {q, -p}, {-q, p}, {-q, -p}};
    bool used[MAX][MAX] = {false};

    while (!que.empty())
    {
        auto cur = que.front();
        que.pop();

        if (cur.x == finish.first && cur.y == finish.second)
            return cur.d;

        for (auto r : run)
            if (cur.x + r.first <= m && cur.x + r.first >= 1 && cur.y + r.second <= n && cur.y + r.second >= 1 && !used[cur.x + r.first][cur.y + r.second])
            {
                used[cur.x + r.first][cur.y + r.second] = true;
                que.push({cur.x + r.first, cur.y + r.second, cur.d + 1});
            }
    }

    return -1;
}

void solve()
{
    int x1, y1, x2, y2;
    cin >> m >> n >> p >> q >> x1 >> y1 >> x2 >> y2;

    cout << bfs({x1, y1}, {x2, y2}) << endl;
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
