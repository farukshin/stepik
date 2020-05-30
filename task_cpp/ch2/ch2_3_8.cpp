#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, p = 100, ans = 0;
    int i = 3;
    while (i--)
    {
        cin >> n;
        cout << ((n % 10000) / 10) << " ";
    }

    return 0;
}
