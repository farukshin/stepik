#include <iostream>
using namespace std;

int n = 0;
int res = -1;

bool check_num(int m)
{
    int num[10] = {0, 1, 0, 1, 1, 1, 1, 1, 1, 1};
    while (m > 0)
    {
        num[m % 10]--;
        if (num[m % 10] < 0)
            return false;
        m = m / 10;
    }
    return true;
}

int get_maxN(int m)
{
    int mas[10] = {1000000000, 100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};
    int ans = 0;

    for (int r : mas)
    {
        if ((n / r) % 10 != 0)
        {
            if (r < 10000000)
            {
                ans += 1 * r * 10 + 9 * r;
                int i = 8;
                r = r / 10;
                while (r >= 1)
                {
                    ans += i * r;
                    i--;
                    r = r / 10;
                }
            }
            else
                ans = 98765431;
            break;
        }
    }
    return ans;
}

int main()
{
    cin >> n;

    if (n > 0)
    {
        int maxN = get_maxN(n);
        for (int cur = n + 1; cur <= maxN; cur++)
            if (check_num(cur))
            {
                res = cur;
                break;
            }
    }
    else
        res = 1;

    cout << res << endl;
    return 0;
}
