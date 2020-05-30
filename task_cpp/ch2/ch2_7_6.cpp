#include <iostream>
using namespace std;
int main()
{
    int n, i = 5;
    while (i--)
    {
        cin >> n;
        cout << (n + 1) % 2 * (5 - i) << " ";
    }
    return 0;
}
