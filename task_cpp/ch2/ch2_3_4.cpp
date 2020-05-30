#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, p = 10000;
    cin >> n;
    while (n)
    {
        k += (n % 10) * p;
        p /= 10;
        n = n / 10;
    }
    cout << k << endl;
    return 0;
}
