#include <iostream>
using namespace std;
int main()
{
    int n, m, k = 0, p = 100;
    cin >> n >> m;
    while (n || m)
    {
        cout << n / p + m / p << " ";
        n = n % p;
        m = m % p;
        p /= 10;
    }
    //cout << k<< endl;
    return 0;
}
