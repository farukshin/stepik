// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 1005;
int n, m;
char ans[MAX][MAX] = {' '};
bool used[MAX][MAX] = {false};

struct slide
{
    pair<int, int> start;
    pair<int, int> parrent;
};
queue<slide> que;

bool nearWall(pair<int, int> s)
{
    if (!s.first % 2 || !s.second % 2)
        return false;

    bool nearWall = ans[s.first][s.second - 1] == '|' || ans[s.first][s.second + 1] == '|' || ans[s.first - 1][s.second] == '-' || ans[s.first + 1][s.second] == '-';

    return nearWall;
}

void pushQue(pair<int, int> start, pair<int, int> par)
{
    slide s;
    s.start = start;
    s.parrent = par;
    que.push(s);
}

bool check(const pair<int, int> &s)
{
    bool check = (s.first >= 0) && (s.first < (2 * n + 1)) && (s.second >= 0) && (s.second < (2 * m + 1));
    return check;
}

void runSlider(slide sl)
{

    pair<int, int> run[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (auto r : run)
    {
        pair<int, int> next = sl.start, pre = sl.start, behind = sl.start;

        next.first += r.first;
        next.second += r.second;

        behind.first += -1 * r.first;
        behind.second += -1 * r.second;

        // if (!check(behind) || !check(next))
        //     continue;

        if (next.first == sl.parrent.first && next.second == sl.parrent.second)
            continue;

        if (!(ans[behind.first][behind.second] == '|' || ans[behind.first][behind.second] == '-'))
            continue;

        while (ans[next.first][next.second] == ' ' || ans[next.first][next.second] == 'S')
        {

            if (nearWall(next) && !used[next.first][next.second])
                pushQue(next, pre);

            used[next.first][next.second] = true;

            pre = next;
            next.first += r.first;
            next.second += r.second;

            // if (!check(next))
            //     break;
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
    int n, m;
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

    bfs({stock, {-1, -1}});

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
