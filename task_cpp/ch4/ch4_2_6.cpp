#include <iostream>
using namespace std;
int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (i % 2 == 0 && i > 9 && i < 100 && (i % 10 + i / 10) < 12)
            ans += i;

    cout << ans << endl;

    return 0;
}
