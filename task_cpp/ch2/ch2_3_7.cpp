#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, p = 100, ans = 0;
    int i = 3;
    while (i--)
    {
        cin >> n;
        ans += ((n % 100) / 10) * p;
        p /= 10;
    }
    cout << ans << endl;
    return 0;
}
