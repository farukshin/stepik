#include <iostream>
using namespace std;
int main()
{
    int n, k1 = 0, k2 = 0;
    cin >> n;
    while (n)
    {
        if ((n % 10) % 2 == 0)
            k2++;
        else
            k1++;
        n = n / 10;
    }
    cout << k2 << " " << k1 << endl;

    return 0;
}
