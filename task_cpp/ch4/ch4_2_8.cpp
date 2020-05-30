#include <iostream>
using namespace std;
int main()
{
    int n, cur, ans = 0;
    bool fl = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> cur;
        if (cur % 4 == 0 && cur % 10 == 6)
        {
            cout << i << " ";
            fl = true;
        }
    }
    cout << (!fl ? "NO" : "") << endl;

    return 0;
}
