#include <iostream>
using namespace std;
int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        ans += i;
    cout << ans << endl;

    return 0;
}
