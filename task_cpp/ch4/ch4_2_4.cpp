#include <iostream>
using namespace std;
int main()
{
    int n, cur, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> cur;
        if (cur > 9 && cur < 100 && (cur % 10 * (cur / 10)) > 35)
            ans += cur;
    }
    cout << ans << endl;

    return 0;
}
