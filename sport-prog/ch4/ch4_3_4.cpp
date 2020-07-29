#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 2005;
int n, m;
char ans[MAX][MAX] = {' '};
bool used[MAX][MAX] = {false};

struct slide
{
    pair<int, int> start;
    pair<int, int> parrent;
};
queue<slide> que;

bool isFree(pair<int, int> dot)
{
    return ans[dot.first][dot.second] == ' ' || ans[dot.first][dot.second] == 'S';
}

bool isWall(pair<int, int> dot)
{
    return ans[dot.first][dot.second] == '|' || ans[dot.first][dot.second] == '-';
}

bool inArea(pair<int, int> dot)
{
    return dot.first >= 0 && dot.first < 2 * n + 1 && dot.second >= 0 && dot.second < 2 * m + 1;
}

pair<int, int> getNext(pair<int, int> dot, pair<int, int> step)
{
    dot.first += step.first, dot.second += step.second;
    return dot;
}

bool nearWall(pair<int, int> dot)
{
    pair<int, int> runs[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (auto r : runs)
    {
        pair<int, int> cur = getNext(dot, r);
        if (!inArea(cur))
            continue;
        if (isWall(cur))
            return true;
    }

    return false;
}

pair<int, int> mid(pair<int, int> dot1, pair<int, int> dot2)
{
    dot1.first = (dot1.first + dot2.first) / 2;
    dot1.second = (dot1.second + dot2.second) / 2;
    return dot1;
}

bool behindIsWall(pair<int, int> dot, pair<int, int> step)
{
    pair<int, int> behind;
    behind = mid(dot, getNext(dot, {-1 * step.first, -1 * step.second}));
    if (!inArea(behind))
        return false;

    return isWall(behind);
}

void runSlider(slide sl)
{
    pair<int, int> run[4] = {{2, 0}, {-2, 0}, {0, 2}, {0, -2}};
    for (auto r : run)
    {
        pair<int, int> next = getNext(sl.start, r), pre = sl.start;
        if (!inArea(next))
            continue;
        if (next.first == sl.parrent.first && next.second == sl.parrent.second)
            continue;
        if (!behindIsWall(sl.start, r))
            continue;
        while (inArea(next) && isFree(next) && isFree(mid(next, pre)))
        {
            if (nearWall(next) && !used[next.first][next.second])
                que.push({next, pre});
            used[next.first][next.second] = true;
            pre = next;
            next = getNext(next, r);
        }
    }
}

void bfs(slide sl)
{
    que.push(sl);
    while (!que.empty())
    {
        auto cur = que.front();
        que.pop();
        runSlider(cur);
    }
}

void solve()
{
    cin >> n >> m;

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
            {
                d.push_back({i, j});
                ans[i][j] = ' ';
            }
        }
    }

    bfs({stock, stock});

    for (auto ut : d)
        if (used[ut.first][ut.second])
            ans[ut.first][ut.second] = 'D';

    for (int i = 0; i < 2 * n + 1; i++)
        for (int j = 0; j < 2 * m + 1; j++)
            cout << ans[i][j] << (j == 2 * m ? "\n" : "");
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
