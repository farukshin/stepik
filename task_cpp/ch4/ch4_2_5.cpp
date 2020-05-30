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
        if (cur == 5)
            fl = true;
    }
    cout << (fl ? "YES" : "NO") << endl;

    return 0;
}
