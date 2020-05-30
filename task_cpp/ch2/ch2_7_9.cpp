#include <iostream>
using namespace std;

int main()
{
    int n, i = 8, k = 128, ans = 0;
    while (i--)
    {
        cin >> n;
        ans += n * k;
        k /= 2;
    }
    cout << ans << endl;
    return 0;
}
