#include <iostream>
using namespace std;
int main()
{
    int n, i = 5;
    while (i--)
    {
        cin >> n;
        cout << (n * 3 + 5) % 6 << " ";
    }
    return 0;
}
