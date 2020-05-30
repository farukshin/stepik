#include <iostream>
using namespace std;

int main()
{
    int n, i = 5, k = 16;
    while (i--)
    {
        cin >> n;
        cout << n * k << " ";
        k /= 2;
    }
    return 0;
}
