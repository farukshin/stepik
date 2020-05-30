#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, p = 100, ans = 0;
    int i = 5;
    while (i--)
    {
        cin >> n;
        cout << (n % 2 == 0 ? 0 : 1);
    }

    return 0;
}
